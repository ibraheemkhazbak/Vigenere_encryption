enum Action{
  ENCRYPTION,
  DECRYPTION  
};
typedef struct EncryptDecryptParams{
    enum Action action;
    char* string;
    char* key;
};
