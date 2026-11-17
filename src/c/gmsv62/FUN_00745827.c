/* FUN_00745827 - 0x00745827 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_00745827(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  byte *_Buf2;
  int iVar4;
  char *pcVar5;
  undefined1 local_30 [4];
  int local_2c;
  undefined1 local_28 [4];
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  char *local_10;
  int local_c;
  undefined4 local_8;
  
  iVar3 = FUN_00455c59(local_30);
  iVar3 = *(int *)(iVar3 + 4);
  if (local_2c != 0) {
    FUN_0045e7c2(0);
  }
  if (iVar3 == 0) {
    iVar3 = 0;
    pcVar5 = (char *)(param_1 + 0xc88);
    do {
      if (*pcVar5 != '\0') {
        _memset((char *)(param_1 + 0xc88),0,0x60);
        return 0;
      }
      iVar3 = iVar3 + 1;
      pcVar5 = pcVar5 + 0xc;
    } while (iVar3 < 8);
    local_8 = 1;
  }
  else {
    iVar3 = FUN_00455c59(local_28);
    local_18 = *(int *)(iVar3 + 4);
    if (local_24 != 0) {
      FUN_0045e7c2(0);
      local_24 = 0;
    }
    pcVar5 = (char *)(param_1 + 0xc88);
    local_1c = DAT_00979110;
    local_8 = 1;
    local_14 = 0;
    do {
      local_10 = pcVar5;
      _Buf2 = (byte *)FUN_0051c36a(local_14);
      bVar1 = *_Buf2;
      local_c = 0;
      if (bVar1 == 1) {
        iVar3 = FUN_00650dae(local_18,*(undefined4 *)(_Buf2 + 1),0);
        if ((0 < iVar3) && (*(int *)(_Buf2 + 1) != 0)) goto LAB_00745a99;
LAB_00745a6e:
        if (*pcVar5 != '\0') {
          local_8 = 0;
        }
        *pcVar5 = '\0';
        *_Buf2 = 0;
        local_10 = pcVar5;
      }
      else {
        if (bVar1 < 2) goto LAB_00745a6e;
        if (bVar1 < 4) {
LAB_0074590f:
          iVar3 = *(int *)(_Buf2 + 1);
          if (iVar3 / 1000000 == 2) {
            iVar4 = iVar3 / 10000;
            if (((((iVar4 == 200) || (((iVar4 == 0xc9 || (iVar4 == 0xca)) || (iVar4 == 0xcd)))) ||
                 (((iVar4 == 0xdd || (iVar4 == 0xec)) || (iVar4 == 0xee)))) ||
                ((iVar4 == 0xd4 || (iVar4 == 0xe2)))) ||
               ((iVar4 == 0xe3 || ((iVar3 / 1000 == 0x83d || (iVar3 == 0x200b63))))))
            goto LAB_007459cf;
LAB_00745996:
            local_8 = 0;
            local_10 = pcVar5;
          }
          else {
            if (iVar3 / 1000000 == 5) {
              iVar3 = FUN_0048b5b3(iVar3);
              if ((iVar3 < 8) || ((0xb < iVar3 && (iVar3 != 0x25)))) {
                iVar3 = 0;
              }
              if ((iVar3 != 9) && (iVar3 = FUN_0048b8d9(*(undefined4 *)(_Buf2 + 1)), iVar3 != 6))
              goto LAB_00745996;
            }
LAB_007459cf:
            local_20 = 0;
            if (*(int *)(local_18 + 0x3eb) != 0) {
              local_20 = *(int *)(*(int *)(local_18 + 0x3eb) + -4);
            }
            local_20 = local_20 + -1;
            iVar3 = 1;
            if (0 < local_20) {
              do {
                iVar4 = FUN_00458c4f(local_30,2,iVar3);
                piVar2 = *(int **)(iVar4 + 4);
                if (local_2c != 0) {
                  FUN_00449913(0);
                  local_2c = 0;
                }
                if (((piVar2 != (int *)0x0) &&
                    (iVar4 = FUN_0045e2eb(), iVar4 == *(int *)(_Buf2 + 1))) &&
                   (iVar4 = (**(code **)(*piVar2 + 4))(), iVar4 == 0)) {
                  iVar4 = (**(code **)(*piVar2 + 0x18))();
                  local_c = local_c + iVar4;
                  local_8 = 0;
                }
                iVar3 = iVar3 + 1;
              } while (iVar3 <= local_20);
            }
            pcVar5 = local_10;
            iVar3 = _memcmp(local_10,_Buf2,5);
            if ((iVar3 != 0) || (*(int *)(pcVar5 + 8) != local_c)) {
              local_8 = 0;
            }
          }
          *(undefined4 *)local_10 = *(undefined4 *)_Buf2;
          local_10[4] = _Buf2[4];
          *(int *)(local_10 + 8) = local_c;
        }
        else {
          if (6 < bVar1) {
            if (bVar1 == 7) goto LAB_0074590f;
            if (bVar1 != 8) goto LAB_00745a6e;
          }
LAB_00745a99:
          iVar3 = _memcmp(pcVar5,_Buf2,5);
          if (iVar3 != 0) {
            local_8 = 0;
          }
          *(undefined4 *)pcVar5 = *(undefined4 *)_Buf2;
          pcVar5[4] = _Buf2[4];
          local_10 = pcVar5;
        }
      }
      local_14 = local_14 + 1;
      pcVar5 = local_10 + 0xc;
    } while (local_14 < 8);
  }
  return local_8;
}


