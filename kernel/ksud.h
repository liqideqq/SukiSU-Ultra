#ifndef __KSU_H_KSUD
#define __KSU_H_KSUD

#define KSUD_PATH "/data/adb/ksud"

void ksu_on_post_fs_data(void);

bool ksu_is_safe_mode(void);

extern u32 ksu_devpts_sid;
#endif
