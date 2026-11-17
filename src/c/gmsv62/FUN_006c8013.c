/* FUN_006c8013 - 0x006c8013 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_006c8013(int param_1)

{
  byte *_Buf2;
  undefined4 *_Buf1;
  byte bVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 local_34 [4];
  int local_30;
  undefined1 local_2c [4];
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_c = param_1;
  iVar3 = FUN_00455c59(local_34);
  iVar7 = 0;
  local_1c = (uint)(*(int *)(iVar3 + 4) == 0);
  if (local_30 != 0) {
    FUN_0045e7c2(0);
  }
  if (local_1c == 0) {
    iVar3 = FUN_00455c59(local_2c);
    local_18 = *(int *)(iVar3 + 4);
    if (local_28 != 0) {
      FUN_0045e7c2(0);
      local_28 = 0;
    }
    local_20 = DAT_00979110;
    local_8 = 1;
    do {
      iVar3 = iVar7;
      if (iVar7 == 0x36) {
        iVar3 = 0x2a;
      }
      _Buf2 = (byte *)(iVar3 * 5 + 4 + local_20);
      bVar1 = *_Buf2;
      local_14 = 0;
      if (bVar1 == 1) {
        iVar3 = FUN_00650dae(local_18,*(undefined4 *)(_Buf2 + 1),0);
        if ((0 < iVar3) && (*(int *)(_Buf2 + 1) != 0)) goto LAB_006c80f8;
        puVar6 = (undefined1 *)(param_1 + 0x578 + iVar7 * 0xc);
        if (*(char *)(param_1 + 0x578 + iVar7 * 0xc) != '\0') {
          local_8 = 0;
        }
LAB_006c82d9:
        *puVar6 = 0;
        *_Buf2 = 0;
      }
      else {
        if (bVar1 < 2) {
LAB_006c82c2:
          puVar6 = (undefined1 *)(param_1 + 0x578 + iVar7 * 0xc);
          if (*(char *)(param_1 + 0x578 + iVar7 * 0xc) != '\0') {
            local_8 = 0;
          }
          goto LAB_006c82d9;
        }
        if (bVar1 < 4) {
LAB_006c8129:
          local_1c = *(int *)(_Buf2 + 1) / 1000000;
          if (local_1c == 2) {
            iVar3 = *(int *)(_Buf2 + 1) / 10000;
            if (((((iVar3 == 200) || (((iVar3 == 0xc9 || (iVar3 == 0xca)) || (iVar3 == 0xcd)))) ||
                 (((iVar3 == 0xdd || (iVar3 == 0xec)) || (iVar3 == 0xee)))) ||
                ((iVar3 == 0xd4 || (iVar3 == 0xe2)))) ||
               ((iVar3 == 0xe3 ||
                ((*(int *)(_Buf2 + 1) / 1000 == 0x83d || (*(int *)(_Buf2 + 1) == 0x200b63))))))
            goto LAB_006c81f7;
LAB_006c81bc:
            local_8 = 0;
          }
          else {
            if (local_1c == 5) {
              iVar3 = FUN_0048b5b3(*(undefined4 *)(_Buf2 + 1));
              if ((iVar3 < 8) || ((0xb < iVar3 && (iVar3 != 0x25)))) {
                iVar3 = 0;
              }
              if ((iVar3 != 9) && (iVar3 = FUN_0048b8d9(*(undefined4 *)(_Buf2 + 1)), iVar3 != 6))
              goto LAB_006c81bc;
            }
LAB_006c81f7:
            iVar3 = *(int *)(local_18 + 0x3e3 + local_1c * 4);
            local_24 = 0;
            if (iVar3 != 0) {
              local_24 = *(int *)(iVar3 + -4);
            }
            local_24 = local_24 + -1;
            local_10 = 1;
            if (0 < local_24) {
              do {
                iVar3 = FUN_00458c4f(local_34,local_1c,local_10);
                piVar2 = *(int **)(iVar3 + 4);
                if (local_30 != 0) {
                  FUN_00449913(0);
                  local_30 = 0;
                }
                if (((piVar2 != (int *)0x0) &&
                    (iVar3 = FUN_0045e2eb(), iVar3 == *(int *)(_Buf2 + 1))) &&
                   (iVar3 = (**(code **)(*piVar2 + 4))(), iVar3 == 0)) {
                  iVar3 = (**(code **)(*piVar2 + 0x18))();
                  local_14 = local_14 + iVar3;
                }
                local_10 = local_10 + 1;
                param_1 = local_c;
              } while (local_10 <= local_24);
            }
            iVar3 = param_1 + iVar7 * 0xc;
            iVar5 = _memcmp((void *)(iVar3 + 0x578),_Buf2,5);
            if ((iVar5 != 0) || (param_1 = local_c, *(int *)(iVar3 + 0x580) != local_14)) {
              local_8 = 0;
              param_1 = local_c;
            }
          }
          param_1 = param_1 + iVar7 * 0xc;
          *(undefined4 *)(param_1 + 0x578) = *(undefined4 *)_Buf2;
          *(byte *)(param_1 + 0x57c) = _Buf2[4];
          *(int *)(param_1 + 0x580) = local_14;
          param_1 = local_c;
        }
        else {
          if (6 < bVar1) {
            if (bVar1 == 7) goto LAB_006c8129;
            if (bVar1 != 8) goto LAB_006c82c2;
          }
LAB_006c80f8:
          _Buf1 = (undefined4 *)(param_1 + 0x578 + iVar7 * 0xc);
          iVar3 = _memcmp(_Buf1,_Buf2,5);
          if (iVar3 != 0) {
            local_8 = 0;
          }
          *_Buf1 = *(undefined4 *)_Buf2;
          *(byte *)(_Buf1 + 1) = _Buf2[4];
          param_1 = local_c;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x59);
  }
  else {
    iVar3 = 0;
    pcVar4 = (char *)(param_1 + 0x578);
    do {
      if (*pcVar4 != '\0') {
        _memset((char *)(param_1 + 0x578),0,0x42c);
        return 0;
      }
      iVar3 = iVar3 + 1;
      pcVar4 = pcVar4 + 0xc;
    } while (iVar3 < 0x59);
    local_8 = 1;
  }
  return local_8;
}


