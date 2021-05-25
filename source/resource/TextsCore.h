#ifndef TextsCoreH
#define TextsCoreH

#define UNKNOWN_KEY4    1
#define DIFFERENT_KEY5  2
#define OLD_KEY         3

#define SCRIPT_HELP_HELP        4
#define SCRIPT_EXIT_HELP        5
#define SCRIPT_OPEN_HELP10      6
#define SCRIPT_CLOSE_HELP       7
#define SCRIPT_SESSION_HELP     8
#define SCRIPT_PWD_HELP         9
#define SCRIPT_CD_HELP          10
#define SCRIPT_LS_HELP2         11
#define SCRIPT_LPWD_HELP        12
#define SCRIPT_LCD_HELP         13
#define SCRIPT_LLS_HELP2        14
#define SCRIPT_RM_HELP2         15
#define SCRIPT_RMDIR_HELP       16
#define SCRIPT_MV_HELP2         17
#define SCRIPT_CHMOD_HELP2      18
#define SCRIPT_LN_HELP          19
#define SCRIPT_MKDIR_HELP       20
#define SCRIPT_GET_HELP8        21
#define SCRIPT_PUT_HELP8        22
#define SCRIPT_OPTION_HELP7     23
#define SCRIPT_SYNCHRONIZE_HELP7 24
#define SCRIPT_KEEPUPTODATE_HELP5 25
#define SCRIPT_CALL_HELP2       26
#define SCRIPT_ECHO_HELP        27
#define SCRIPT_STAT_HELP        28
#define SCRIPT_CHECKSUM_HELP    29
#define SCRIPT_CP_HELP          30

#define CORE_ERROR_STRINGS      100
#define KEY_NOT_VERIFIED        101
#define CONNECTION_FAILED       102
#define USER_TERMINATED         103
#define LOST_CONNECTION         104
#define CANT_DETECT_RETURN_CODE 105
#define COMMAND_FAILED2         106
#define COMMAND_FAILED_CODEONLY 107
#define INVALID_OUTPUT_ERROR    108
#define READ_CURRENT_DIR_ERROR  109
#define SKIP_STARTUP_MESSAGE_ERROR 110
#define CHANGE_DIR_ERROR        111
#define LIST_DIR_ERROR          113
#define LIST_LINE_ERROR         114
#define RIGHTS_ERROR            115
#define CLEANUP_CONFIG_ERROR    116
#define CLEANUP_CACHES_ERROR    117
#define CLEANUP_SEEDFILE_ERROR  118
#define CLEANUP_SESSIONS_ERROR  119
#define DETECT_RETURNVAR_ERROR  120
#define LOOKUP_GROUPS_ERROR     121
#define FILE_NOT_EXISTS         122
#define CANT_GET_ATTRS          123
#define OPENFILE_ERROR          124
#define READ_ERROR              125
#define COPY_FATAL              126
#define TOREMOTE_COPY_ERROR     127
#define TOLOCAL_COPY_ERROR      128
#define SCP_EMPTY_LINE          129
#define SCP_ILLEGAL_TIME_FORMAT 130
#define SCP_INVALID_CONTROL_RECORD 131
#define COPY_ERROR              132
#define SCP_ILLEGAL_FILE_DESCRIPTOR 133
#define NOT_DIRECTORY_ERROR     134
#define CREATE_DIR_ERROR        135
#define CREATE_FILE_ERROR       136
#define WRITE_ERROR             137
#define CANT_SET_ATTRS          138
#define REMOTE_ERROR            139
#define DELETE_FILE_ERROR       140
#define LOG_GEN_ERROR           141
#define LOG_OPENERROR           142
#define RENAME_FILE_ERROR       143
#define RENAME_CREATE_FILE_EXISTS 144
#define RENAME_CREATE_DIR_EXISTS 145
#define CHANGE_HOMEDIR_ERROR    146
#define UNALIAS_ALL_ERROR       147
#define UNSET_NATIONAL_ERROR    149
#define FIRST_LINE_EXPECTED     150
#define CLEANUP_INIFILE_ERROR   151
#define AUTHENTICATION_LOG      153
#define AUTHENTICATION_FAILED   154
#define NOT_CONNECTED           155
#define SAVE_KEY_ERROR          156
#define SSH_EXITCODE            158
#define SFTP_INVALID_TYPE       159
#define SFTP_VERSION_NOT_SUPPORTED 160
#define SFTP_MESSAGE_NUMBER     161
#define SFTP_STATUS_OK          162
#define SFTP_STATUS_EOF         163
#define SFTP_STATUS_NO_SUCH_FILE 164
#define SFTP_STATUS_PERMISSION_DENIED 165
#define SFTP_STATUS_FAILURE     166
#define SFTP_STATUS_BAD_MESSAGE 167
#define SFTP_STATUS_NO_CONNECTION 168
#define SFTP_STATUS_CONNECTION_LOST 169
#define SFTP_STATUS_OP_UNSUPPORTED 170
#define SFTP_ERROR_FORMAT3      171
#define SFTP_STATUS_UNKNOWN     172
#define READ_SYMLINK_ERROR      173
#define EMPTY_DIRECTORY         174
#define SFTP_NON_ONE_FXP_NAME_PACKET 175
#define SFTP_REALPATH_ERROR     176
#define CHANGE_PROPERTIES_ERROR 177
#define SFTP_INITIALIZE_ERROR   178
#define TIMEZONE_ERROR          179
#define SFTP_CREATE_FILE_ERROR  180
#define SFTP_OPEN_FILE_ERROR    181
#define SFTP_CLOSE_FILE_ERROR   182
#define NOT_FILE_ERROR          183
#define RENAME_AFTER_RESUME_ERROR 184
#define CREATE_LINK_ERROR       185
#define INVALID_SHELL_COMMAND   186
#define SFTP_SERVER_MESSAGE_UNSUPPORTED 187
#define INVALID_OCTAL_PERMISSIONS 188
#define SFTP_INVALID_EOL        189
#define SFTP_UNKNOWN_FILE_TYPE  190
#define SFTP_STATUS_INVALID_HANDLE 191
#define SFTP_STATUS_NO_SUCH_PATH 192
#define SFTP_STATUS_FILE_ALREADY_EXISTS 193
#define SFTP_STATUS_WRITE_PROTECT 194
#define SFTP_STATUS_NO_MEDIA    195
#define DECODE_UTF_ERROR        196
#define CUSTOM_COMMAND_ERROR    197
#define LOCALE_LOAD_ERROR       198
#define SFTP_INCOMPLETE_BEFORE_EOF 199
#define CALCULATE_SIZE_ERROR    200
#define SFTP_PACKET_TOO_BIG     201
#define SCP_INIT_ERROR          202
#define DUPLICATE_BOOKMARK      203
#define MOVE_FILE_ERROR         204
#define SFTP_PACKET_TOO_BIG_INIT_EXPLAIN 205
#define PRESERVE_TIME_PERM_ERROR3 206
#define ACCESS_VIOLATION_ERROR3 207
#define SFTP_STATUS_NO_SPACE_ON_FILESYSTEM 208
#define SFTP_STATUS_QUOTA_EXCEEDED 209
#define SFTP_STATUS_UNKNOWN_PRINCIPAL 210
#define COPY_FILE_ERROR         211
#define CUSTOM_COMMAND_UNTERMINATED 212
#define CUSTOM_COMMAND_UNKNOWN  213
#define CUSTOM_COMMAND_FILELIST_ERROR 214
#define SCRIPT_COMMAND_UNKNOWN  215
#define SCRIPT_COMMAND_AMBIGUOUS 216
#define SCRIPT_MISSING_PARAMS   217
#define SCRIPT_TOO_MANY_PARAMS  218
#define SCRIPT_NO_SESSION       223
#define SCRIPT_SESSION_INDEX_INVALID 224
#define SCRIPT_OPTION_UNKNOWN   225
#define SCRIPT_VALUE_UNKNOWN    226
#define UNKNOWN_SOCKET_STATUS   227
#define DELETE_ON_RESUME_ERROR  228
#define SFTP_PACKET_ERROR       229
#define ITEM_NAME_INVALID       230
#define SFTP_STATUS_LOCK_CONFLICT 231
#define SFTP_STATUS_DIR_NOT_EMPTY 232
#define SFTP_STATUS_NOT_A_DIRECTORY 233
#define SFTP_STATUS_INVALID_FILENAME 234
#define SFTP_STATUS_LINK_LOOP   235
#define SFTP_STATUS_CANNOT_DELETE 236
#define SFTP_STATUS_INVALID_PARAMETER 237
#define SFTP_STATUS_FILE_IS_A_DIRECTORY 238
#define SFTP_STATUS_BYTE_RANGE_LOCK_CONFLICT 239
#define SFTP_STATUS_BYTE_RANGE_LOCK_REFUSED 240
#define SFTP_STATUS_DELETE_PENDING 241
#define SFTP_STATUS_FILE_CORRUPT 242
#define KEY_TYPE_UNKNOWN2       243
#define KEY_TYPE_UNSUPPORTED2   244
#define KEY_TYPE_SSH1           245
#define SFTP_OVERWRITE_FILE_ERROR2 246
#define SFTP_OVERWRITE_DELETE_BUTTON 247
#define SPACE_AVAILABLE_ERROR   248
#define TUNNEL_NO_FREE_PORT     249
#define EVENT_SELECT_ERROR      250
#define UNEXPECTED_CLOSE_ERROR  251
#define TUNNEL_ERROR            252
#define CHECKSUM_ERROR          253
#define INTERNAL_ERROR          254
#define NOTSUPPORTED            255
#define FTP_ACCESS_DENIED       256
#define FTP_CREDENTIAL_PROMPT   257
#define FTP_RESPONSE_ERROR      258
#define SCRIPT_UNKNOWN_SWITCH   260
#define TRANSFER_ERROR          261
#define EXECUTE_APP_ERROR       262
#define FILE_NOT_FOUND          263
#define DOCUMENT_WAIT_ERROR     264
#define SPEED_INVALID           265
#define CERT_ERR_CERT_CHAIN_TOO_LONG 266
#define CERT_ERR_CERT_HAS_EXPIRED 267
#define CERT_ERR_CERT_NOT_YET_VALID 268
#define CERT_ERR_CERT_REJECTED  269
#define CERT_ERR_CERT_SIGNATURE_FAILURE 270
#define CERT_ERR_CERT_UNTRUSTED 271
#define CERT_ERR_DEPTH_ZERO_SELF_SIGNED_CERT 272
#define CERT_ERR_ERROR_IN_CERT_NOT_AFTER_FIELD 273
#define CERT_ERR_ERROR_IN_CERT_NOT_BEFORE_FIELD 274
#define CERT_ERR_INVALID_CA     275
#define CERT_ERR_INVALID_PURPOSE 276
#define CERT_ERR_KEYUSAGE_NO_CERTSIGN 277
#define CERT_ERR_PATH_LENGTH_EXCEEDED 278
#define CERT_ERR_SELF_SIGNED_CERT_IN_CHAIN 279
#define CERT_ERR_UNABLE_TO_DECODE_ISSUER_PUBLIC_KEY 280
#define CERT_ERR_UNABLE_TO_DECRYPT_CERT_SIGNATURE 281
#define CERT_ERR_UNABLE_TO_GET_ISSUER_CERT 282
#define CERT_ERR_UNABLE_TO_GET_ISSUER_CERT_LOCALLY 283
#define CERT_ERR_UNABLE_TO_VERIFY_LEAF_SIGNATURE 284
#define CERT_ERR_UNKNOWN        285
#define CERT_ERRDEPTH           286
#define MASK_ERROR              288
#define FTP_CANNOT_OPEN_ACTIVE_CONNECTION2 289
#define DELETE_LOCAL_FILE_ERROR 290
#define URL_OPTION_BOOL_VALUE_ERROR 291
#define CANNOT_OPEN_SESSION_FOLDER 293
#define NET_TRANSL_NO_ROUTE2    294
#define NET_TRANSL_CONN_ABORTED 295
#define NET_TRANSL_HOST_NOT_EXIST2 296
#define NET_TRANSL_PACKET_GARBLED 297
#define REPORT_ERROR            298
#define TLS_CERT_DECODE_ERROR   299
#define FIND_FILE_ERROR         700
#define CERT_NAME_MISMATCH      701
#define SCRIPT_MATCH_NO_MATCH   702
#define CERT_ERR_BAD_CHAIN      703
#define CERT_OK                 704
#define REQUEST_REDIRECTED      705
#define TOO_MANY_REDIRECTS      706
#define REDIRECT_LOOP           707
#define INVALID_URL             708
#define PROXY_AUTHENTICATION_FAILED 709
#define CONFIGURED_KEY_NOT_MATCH 710
#define SFTP_STATUS_OWNER_INVALID 711
#define SFTP_STATUS_GROUP_INVALID 712
#define SFTP_STATUS_NO_MATCHING_BYTE_RANGE_LOCK 713
#define KEY_TYPE_UNOPENABLE     714
#define UNKNOWN_CHECKSUM        715
#define ALG_NOT_VERIFIED        716
#define SFTP_STATUS_4           718
#define CERTIFICATE_OPEN_ERROR  719
#define CERTIFICATE_READ_ERROR  720
#define CERTIFICATE_DECODE_ERROR_INFO 721
#define CERTIFICATE_DECODE_ERROR 722
#define CERTIFICATE_PUBLIC_KEY_NOT_FOUND 723
#define LOCK_FILE_ERROR         724
#define UNLOCK_FILE_ERROR       725
#define NOT_LOCKED              726
#define KEY_SAVE_ERROR          727
#define NEON_INIT_FAILED2       728
#define SCRIPT_AMBIGUOUS_SLASH_IN_PATH 729
#define CERT_IP_CANNOT_VERIFY   730
#define HOSTKEY_NOT_CONFIGURED  731
#define UNENCRYPTED_REDIRECT    732
#define HTTP_ERROR2             733
#define FILEZILLA_SITE_MANAGER_NOT_FOUND 734
#define FILEZILLA_NO_SITES      735
#define FILEZILLA_SITE_NOT_EXIST 736
#define SFTP_AS_FTP_ERROR       737
#define LOG_FATAL_ERROR         738
#define SIZE_INVALID            739
#define KNOWN_HOSTS_NOT_FOUND   740
#define KNOWN_HOSTS_NO_SITES    741
#define HOSTKEY_NOT_MATCH_CLIPBOARD 742
#define S3_ERROR_RESOURCE       743
#define S3_ERROR_FURTHER_DETAILS 744
#define S3_ERROR_EXTRA_DETAILS  745
#define S3_STATUS_ACCESS_DENIED 746
#define UNKNOWN_FILE_ENCRYPTION 747
#define INVALID_ENCRYPT_KEY     748
#define UNREQUESTED_FILE        749
#define STORE_NEW_HOSTKEY_ERROR 750
#define STREAM_IN_SCRIPT_ERROR  751
#define STREAM_READ_ERROR       752
#define S3_CONFIG_ERROR         753

#define CORE_CONFIRMATION_STRINGS 300
#define CONFIRM_PROLONG_TIMEOUT3 301
#define PROMPT_KEY_PASSPHRASE   303
#define FILE_OVERWRITE          304
#define DIRECTORY_OVERWRITE     305
#define ALG_BELOW_TRESHOLD      306
#define CIPHER_TYPE_BOTH2       307
#define CIPHER_TYPE_CS2         308
#define CIPHER_TYPE_SC2         309
#define RESUME_TRANSFER2        310
#define PARTIAL_BIGGER_THAN_SOURCE 311
#define APPEND_OR_RESUME2       312
#define FILE_OVERWRITE_DETAILS  313
#define READ_ONLY_OVERWRITE     314
#define LOCAL_FILE_OVERWRITE2   315
#define REMOTE_FILE_OVERWRITE2  316
#define TIMEOUT_STILL_WAITING3  321
#define RECONNECT_BUTTON        323
#define RENAME_BUTTON           324
#define TUNNEL_SESSION_NAME     327
#define PASSWORD_TITLE          328
#define PASSPHRASE_TITLE        329
#define SERVER_PROMPT_TITLE     330
#define USERNAME_TITLE          331
#define USERNAME_PROMPT2        332
#define SERVER_PROMPT_TITLE2    333
#define NEW_PASSWORD_TITLE      334
#define PROMPT_PROMPT           335
#define TIS_INSTRUCTION         336
#define CRYPTOCARD_INSTRUCTION  337
#define PASSWORD_PROMPT         338
#define KEYBINTER_INSTRUCTION   339
#define NEW_PASSWORD_CURRENT_PROMPT 340
#define NEW_PASSWORD_NEW_PROMPT 341
#define NEW_PASSWORD_CONFIRM_PROMPT 342
#define TUNNEL_INSTRUCTION2     343
#define RENAME_TITLE            344
#define RENAME_PROMPT2          345
#define VERIFY_CERT_PROMPT3     346
#define VERIFY_CERT_CONTACT     347
#define VERIFY_CERT_CONTACT_LIST 348
#define CERT_TEXT2              349
#define CERTIFICATE_PASSPHRASE_PROMPT 350
#define CERTIFICATE_PASSPHRASE_TITLE 351
#define KEY_TYPE_CONVERT3       352
#define MULTI_FILES_TO_ONE      353
#define KEY_EXCHANGE_ALG        354
#define KEYKEY_TYPE             355
#define S3_ACCESS_KEY_ID_TITLE  356
#define S3_ACCESS_KEY_ID_PROMPT 357
#define S3_SECRET_ACCESS_KEY_TITLE 358
#define S3_SECRET_ACCESS_KEY_PROMPT 359
#define DUPLICATE_FOLDER_NOT_SUPPORTED 360
#define MISSING_TARGET_BUCKET   361
#define TIMEOUT_ERROR           362

#define CORE_INFORMATION_STRINGS 400
#define YES_STR                 401
#define NO_STR                  402
#define SESSION_INFO_TIP2       403
#define VERSION2                404
#define CLOSED_ON_COMPLETION    405
#define SFTP_PROTOCOL_NAME2     406
#define FS_RENAME_NOT_SUPPORTED 407
#define SFTP_NO_EXTENSION_INFO  408
#define SFTP_EXTENSION_INFO     409
#define APPEND_BUTTON           412
#define YES_TO_NEWER_BUTTON     413
#define SCRIPT_HELP_DESC        414
#define SCRIPT_EXIT_DESC        415
#define SCRIPT_OPEN_DESC        416
#define SCRIPT_CLOSE_DESC       417
#define SCRIPT_SESSION_DESC     418
#define SCRIPT_PWD_DESC         419
#define SCRIPT_CD_DESC          420
#define SCRIPT_LS_DESC          421
#define SCRIPT_LPWD_DESC        422
#define SCRIPT_LCD_DESC         423
#define SCRIPT_LLS_DESC         424
#define SCRIPT_RM_DESC          425
#define SCRIPT_RMDIR_DESC       426
#define SCRIPT_MV_DESC          427
#define SCRIPT_CHMOD_DESC       428
#define SCRIPT_LN_DESC          429
#define SCRIPT_MKDIR_DESC       430
#define SCRIPT_GET_DESC         431
#define SCRIPT_PUT_DESC         432
#define SCRIPT_OPTION_DESC      433
#define SCRIPT_SYNCHRONIZE_DESC 434
#define SCRIPT_KEEPUPTODATE_DESC 435
#define SCRIPT_HOST_PROMPT      436
#define SCRIPT_ACTIVE_SESSION   438
#define SCRIPT_SESSION_CLOSED   439
#define SCRIPT_SYNCHRONIZE      440
#define SCRIPT_SYNCHRONIZE_DELETED 441
#define SCRIPT_KEEPING_UP_TO_DATE 442
#define SKIP_ALL_BUTTON         443
#define SCRIPT_CALL_DESC2       444
#define COPY_PARAM_PRESET_ASCII 445
#define COPY_PARAM_PRESET_BINARY 446
#define COPY_INFO_TRANSFER_TYPE2 448
#define COPY_INFO_FILENAME      449
#define COPY_INFO_PERMISSIONS   450
#define COPY_INFO_ADD_X_TO_DIRS 451
#define COPY_INFO_TIMESTAMP     452
#define COPY_INFO_FILE_MASK     454
#define COPY_INFO_CLEAR_ARCHIVE 455
#define COPY_INFO_DONT_REPLACE_INV_CHARS 456
#define COPY_INFO_DONT_PRESERVE_TIME 458
#define COPY_INFO_DONT_CALCULATE_SIZE 459
#define COPY_INFO_DEFAULT       460
#define COPY_RULE_HOSTNAME      461
#define COPY_RULE_USERNAME      462
#define COPY_RULE_REMOTE_DIR    463
#define COPY_RULE_LOCAL_DIR     464
#define SYNCHRONIZE_SCAN        465
#define SYNCHRONIZE_START       466
#define SYNCHRONIZE_CHANGE      467
#define SYNCHRONIZE_UPLOADED    468
#define SYNCHRONIZE_DELETED     469
#define COPY_INFO_NOT_USABLE    470
#define COPY_INFO_IGNORE_PERM_ERRORS 472
#define AUTH_TRANSL_USERNAME    473
#define AUTH_TRANSL_KEYB_INTER  474
#define AUTH_TRANSL_PUBLIC_KEY  475
#define AUTH_TRANSL_WRONG_PASSPHRASE 476
#define AUTH_TRANSL_ACCESS_DENIED 477
#define AUTH_TRANSL_PUBLIC_KEY_AGENT 478
#define AUTH_TRANSL_TRY_PUBLIC_KEY 479
#define AUTH_PASSWORD           480
#define OPEN_TUNNEL             481
#define STATUS_CLOSED           482
#define STATUS_LOOKUPHOST       484
#define STATUS_CONNECT          485
#define STATUS_AUTHENTICATE     486
#define STATUS_AUTHENTICATED    487
#define STATUS_STARTUP          488
#define STATUS_OPEN_DIRECTORY   489
#define STATUS_READY            490
#define USING_TUNNEL            491
#define AUTH_TRANSL_KEY_REFUSED 492
#define PFWD_TRANSL_ADMIN       493
#define PFWD_TRANSL_CONNECT     494
#define NET_TRANSL_REFUSED2     495
#define NET_TRANSL_RESET        496
#define NET_TRANSL_TIMEOUT2     497
#define SESSION_INFO_TIP_NO_SSH 498
#define RESUME_BUTTON           499
#define FTP_NO_FEATURE_INFO     500
#define FTP_FEATURE_INFO        501
#define COPY_INFO_CPS_LIMIT2    502
#define COPY_KEY_BUTTON         503
#define UPDATE_KEY_BUTTON       504
#define ADD_KEY_BUTTON          505
#define COPY_INFO_PRESERVE_READONLY 506
#define SCRIPT_SYNCHRONIZE_COLLECTING 507
#define SCRIPT_SYNCHRONIZE_SYNCHRONIZING 508
#define SCRIPT_SYNCHRONIZE_NODIFFERENCE 509
#define SPEED_UNLIMITED         510
#define FTPS_IMPLICIT           511
#define FTPS_EXPLICIT           513
#define SCRIPT_ECHO_DESC        514
#define SCRIPT_STAT_DESC        515
#define HOSTKEY                 516
#define SCRIPT_FILEMASK_INCLUDE_EXCLUDE 517
#define COPY_PARAM_NEWER_ONLY    518
#define FTP_SUGGESTION          519
#define SCRIPT_CMDLINE_SESSION  520
#define ANY_HOSTKEY      521
#define ANY_CERTIFICATE  522
#define SCRIPT_SYNC_UPLOAD_NEW  523
#define SCRIPT_SYNC_DOWNLOAD_NEW 524
#define SCRIPT_SYNC_UPLOAD_UPDATE 525
#define SCRIPT_SYNC_DOWNLOAD_UPDATE 526
#define SCRIPT_SYNC_DELETE_REMOTE 527
#define SCRIPT_SYNC_DELETE_LOCAL 528
#define SCRIPT_SYNCHRONIZE_CHECKLIST 529
#define COPY_INFO_REMOVE_CTRLZ  530
#define COPY_INFO_REMOVE_BOM    531
#define SCRIPT_NON_DEFAULT_COPY_PARAM 532
#define SCRIPT_NON_DEFAULT_SYNC_PARAM 533
#define VERSION_BUILD           535
#define VERSION_DEV_BUILD       536
#define VERSION_DEBUG_BUILD     537
#define VERSION_DONT_DISTRIBUTE 538
#define WEBDAV_EXTENSION_INFO   539
#define COPY_PARAM_PRESET_EXCLUDE_ALL_DIR 540
#define SCRIPT_CHECKSUM_DESC    541
#define CLIENT_CERTIFICATE_LOADING 543
#define NEED_CLIENT_CERTIFICATE 544
#define LOCKED                  545
#define EXECUTABLE              546
#define SCRIPT_CMDLINE_PARAMETERS 547
#define SCRIPTING_USE_HOSTKEY   548
#define SCRIPT_SITE_WARNING     549
#define CODE_SESSION_OPTIONS    550
#define CODE_CONNECT            551
#define CODE_PS_ADD_TYPE        553
#define COPY_INFO_PRESERVE_TIME_DIRS 554
#define TEXT_FILE_ENCODING      555
#define AND_STR                 556
#define AUTH_CHANGING_PASSWORD  557
#define PASTE_KEY_BUTTON        558
#define SCRIPT_CP_DESC          559
#define TIME_UNKNOWN            560
#define KEY_DETAILS             561
#define COPY_KEY_ACTION         562
#define COPY_CERTIFICATE_ACTION 563
#define COPY_INFO_DONT_ENCRYPT_NEW_FILES 564
#define COPY_INFO_EXCLUDE_HIDDEN_FILES 565
#define COPY_INFO_EXCLUDE_EMPTY_DIRS 566

#define CORE_VARIABLE_STRINGS   600
#define PUTTY_BASED_ON          601
#define PUTTY_COPYRIGHT         603
#define PUTTY_URL               604
#define FILEZILLA_BASED_ON2     605
#define FILEZILLA_COPYRIGHT2    607
#define FILEZILLA_URL           608
#define OPENSSL_BASED_ON        609
#define OPENSSL_COPYRIGHT2      610
#define OPENSSL_URL             612
#define NEON_BASED_ON2          613
#define NEON_COPYRIGHT          614
#define NEON_URL                615
#define EXPAT_BASED_ON          616
#define EXPAT_URL               618
#define PUTTY_LICENSE_URL       625
#define MAIN_MSG_TAG            631
#define INTERACTIVE_MSG_TAG     632
#define S3_BASED_ON             633
#define S3_COPYRIGHT            634
#define S3_URL                  635
#define S3_LICENSE_URL          636

// 7xxx used by errors as secondary sequence

#endif // TextsCore
