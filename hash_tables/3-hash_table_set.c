#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * create_node - creates a new hash node
 * @key: key string
 * @value: value string
 * Return: pointer to the new node, or NULL if it fails
 */
hash_node_t *create_node(const char *key, const char *value)
{
    hash_node_t *new_node;

    new_node = malloc(sizeof(hash_node_t));
    if (!new_node)
        return (NULL);

    new_node->key = strdup(key);
    if (!new_node->key)
    {
        free(new_node);
        return (NULL);
    }

    new_node->value = strdup(value);
    if (!new_node->value)
    {
        free(new_node->key);
        free(new_node);
        return (NULL);
    }

    new_node->next = NULL;
    return (new_node);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add/update in
 * @key: key, cannot be empty string
 * @value: value associated with the key, duplicated, can be empty string
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int idx;
    hash_node_t *new_node, *temp;

    if (!ht || !key || *key == '\0' || !value)
        return (0);

    idx = key_index((const unsigned char *)key, ht->size);
    temp = ht->array[idx];

    /* Check if key exists, update value */
    while (temp)
    {
        if (strcmp(temp->key, key) == 0)
        {
            free(temp->value);
            temp->value = strdup(value);
            if (!temp->value)
                return (0);
            return (1);
        }
        temp = temp->next;
    }

    /* Key not found, create new node */
    new_node = create_node(key, value);
    if (!new_node)
        return (0);

    /* Insert new node at the beginning of the list */
    new_node->next = ht->array[idx];
    ht->array[idx] = new_node;

    return (1);
}
