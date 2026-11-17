/* FUN_00874460 - 0x00874460 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00874460(int param_1)

{
  char cVar1;
  BOOL BVar2;
  DWORD DVar3;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  DWORD local_24;
  DWORD local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_008f3e78;
  puStack_10 = &LAB_0087b11c;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffb0;
  local_24 = 0;
  local_44 = 0;
  local_30 = 0;
  local_8 = 0;
  ExceptionList = &local_14;
LAB_0087449d:
  do {
    if (local_24 == 0) {
      BVar2 = PeekNamedPipe(*(HANDLE *)(param_1 + 8),(LPVOID)0x0,0,(LPDWORD)0x0,&local_24,
                            (LPDWORD)0x0);
      if ((BVar2 == 0) && (cVar1 = FUN_0086e010(param_1,0x60f,0), cVar1 == '\0')) goto LAB_0087484b;
      if (local_24 != 0) goto LAB_00874591;
      DVar3 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x10),0x32);
      if ((DVar3 == 0) ||
         ((local_30 = local_30 + 1, 199 < local_30 &&
          (((cVar1 = FUN_00873e20(0x8b1,0x60e,0), cVar1 == '\0' &&
            (cVar1 = FUN_0086e010(param_1,0x60f,0), cVar1 == '\0')) ||
           ((799 < local_30 && (cVar1 = FUN_0086e010(param_1,0x618,local_30), cVar1 == '\0'))))))))
      goto LAB_0087484b;
      if ((*(char *)(param_1 + 0x14) == '\0') || (local_44 = local_44 + 1, local_44 < 0x50))
      goto LAB_0087449d;
      local_44 = 0;
      *(undefined1 *)(param_1 + 0x14) = 0;
      cVar1 = FUN_00873e20(0x8b0,0,0);
      if (cVar1 != '\0') goto LAB_0087449d;
      cVar1 = FUN_0086e010(param_1,0x60f,0);
    }
    else {
LAB_00874591:
      local_30 = 0;
      BVar2 = ReadFile(*(HANDLE *)(param_1 + 8),&local_40,0x10,&local_20,(LPOVERLAPPED)0x0);
      if (((BVar2 == 0) || (local_20 == 0)) &&
         (cVar1 = FUN_0086e010(param_1,0x60f,0), cVar1 == '\0')) goto LAB_0087484b;
      local_24 = local_24 - local_20;
      if (local_38 == 0x60e) goto LAB_0087449d;
      if (local_40 == 0x8b1) {
        if (local_38 == 0x63d) {
          if (0x1000 < local_34) goto LAB_0087484b;
          *(uint *)(param_1 + 0x1630) = local_34;
          BVar2 = ReadFile(*(HANDLE *)(param_1 + 8),(LPVOID)(param_1 + 0x630),local_34,&local_20,
                           (LPOVERLAPPED)0x0);
          if (((BVar2 == 0) || (local_20 == 0)) &&
             (cVar1 = FUN_0086e010(param_1,0x60f,0), cVar1 == '\0')) goto LAB_0087484b;
          local_24 = local_24 - local_20;
          goto LAB_0087449d;
        }
        if (local_38 != 0x63c) {
          if (local_38 != 0x613) {
            if (local_38 != 0x619) goto LAB_00874755;
            if ((0x10 < local_34) ||
               (((BVar2 = ReadFile(*(HANDLE *)(param_1 + 8),(LPVOID)(param_1 + 0x18),local_34,
                                   &local_20,(LPOVERLAPPED)0x0), BVar2 == 0 || (local_20 == 0)) &&
                (cVar1 = FUN_0086e010(param_1,0x60f,0), cVar1 == '\0')))) goto LAB_0087484b;
            local_24 = local_24 - local_20;
            cVar1 = FUN_0086e010(param_1,local_38,local_34);
            goto joined_r0x0087482e;
          }
          if ((0x200 < local_34) ||
             (((BVar2 = ReadFile(*(HANDLE *)(param_1 + 8),(LPVOID)(param_1 + 0x2c),local_34,
                                 &local_20,(LPOVERLAPPED)0x0), BVar2 == 0 || (local_20 == 0)) &&
              (cVar1 = FUN_0086e010(param_1,0x60f,0), cVar1 == '\0')))) goto LAB_0087484b;
          local_24 = local_24 - local_20;
          goto LAB_0087449d;
        }
        if (0x400 < local_34) goto LAB_0087484b;
        *(uint *)(param_1 + 0x62c) = local_34;
        BVar2 = ReadFile(*(HANDLE *)(param_1 + 8),(LPVOID)(param_1 + 0x22c),local_34,&local_20,
                         (LPOVERLAPPED)0x0);
        if (((BVar2 == 0) || (local_20 == 0)) &&
           (cVar1 = FUN_0086e010(param_1,0x60f,0), cVar1 == '\0')) goto LAB_0087484b;
        local_24 = local_24 - local_20;
        cVar1 = FUN_0086e010(param_1,local_38,local_34);
      }
      else {
LAB_00874755:
        if (local_40 == 0x8b2) {
          if (local_38 == 0) {
            *(undefined1 *)(param_1 + 0x14) = 0;
            *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
            goto LAB_0087449d;
          }
          if (local_38 != 0x610) goto LAB_0087449d;
          cVar1 = FUN_0086e010(param_1,0x610,0);
        }
        else {
          if (local_40 == 0x8b0) {
            if (*(int *)(param_1 + 0xc) == local_3c) {
              cVar1 = FUN_00873e20(0x8b2,local_38,0);
              if ((cVar1 == '\0') && (cVar1 = FUN_0086e010(param_1,0x60f,0), cVar1 == '\0'))
              goto LAB_0087484b;
              *(undefined1 *)(param_1 + 0x14) = 1;
              *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
            }
            else {
              cVar1 = FUN_0086e010(param_1,0x60f,0);
              if (cVar1 == '\0') goto LAB_0087484b;
              *(undefined1 *)(param_1 + 0x14) = 1;
              *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
            }
            goto LAB_0087449d;
          }
          if (local_40 != 0x8b1) goto LAB_0087449d;
          if ((local_38 == 0x610) && (cVar1 = FUN_0086e010(param_1,0x610,0), cVar1 == '\0'))
          goto LAB_0087484b;
          cVar1 = FUN_00873e20(0x8b2,local_38,local_34);
          if (cVar1 == '\0') {
            cVar1 = FUN_0086e010(param_1,0x60f,0);
          }
          else {
            cVar1 = FUN_0086e010(param_1,local_38,local_34);
          }
        }
      }
    }
joined_r0x0087482e:
    if (cVar1 == '\0') {
LAB_0087484b:
      if (*(HANDLE *)(param_1 + 8) != (HANDLE)0xffffffff) {
        CloseHandle(*(HANDLE *)(param_1 + 8));
        *(undefined4 *)(param_1 + 8) = 0xffffffff;
      }
      DVar3 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x10),30000);
      if (((DVar3 == 0) && (local_38 != 0x610)) && (local_38 != 0x60f)) {
        FUN_00873e20(0x8b1,0x610,0);
      }
      ExceptionList = local_14;
      return 0;
    }
  } while( true );
}


