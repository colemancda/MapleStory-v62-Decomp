/* FUN_004c532a - 0x004c532a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_004c532a(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int local_8;
  
  iVar3 = DAT_00979110;
  if ((param_4 == 0) || (*(int *)(DAT_00978360 + 0xc78) != 0)) {
    local_8 = 0;
    if (DAT_009791a0 != 0) {
      local_8 = DAT_009791a0;
    }
    if (param_4 == 0) {
      iVar4 = FUN_006c69a5(param_2,param_3);
      if (((-1 < iVar4) && ((iVar4 < 0x5b || (*(int *)(param_1 + 0x18) == 0)))) &&
         ((*(int *)(param_1 + 0x10) == 6 ||
          (((iVar4 != 0x35 && (((iVar4 < 0x3b || (0x44 < iVar4)) && (iVar4 != 0x57)))) &&
           (iVar4 != 0x58)))))) goto LAB_004c53bb;
    }
    else {
      iVar4 = FUN_007467b1(param_2,param_3);
      if ((-1 < iVar4) && (iVar4 < 8)) {
LAB_004c53bb:
        iVar7 = 0;
        do {
          iVar6 = iVar7;
          if (iVar7 == 0x36) {
            iVar6 = 0x2a;
          }
          pbVar1 = (byte *)(iVar6 * 5 + 4 + iVar3);
          if (((uint)*pbVar1 == *(uint *)(param_1 + 0x10)) &&
             (*(int *)(pbVar1 + 1) == *(int *)(param_1 + 0x14))) {
            *pbVar1 = 0;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 0x59);
        if (iVar4 < 0x5b) {
          if (param_4 == 0) {
            if (iVar4 == 0x36) {
              iVar4 = 0x2a;
            }
            pcVar5 = (char *)(iVar4 * 5 + 4 + iVar3);
          }
          else {
            pcVar5 = (char *)FUN_0051c36a(iVar4);
          }
          if (param_4 == 0) {
            if (*(int *)(param_1 + 0x18) != 0) {
              FUN_006c93aa(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
            }
            cVar2 = *pcVar5;
            if (((cVar2 == '\x04') || (cVar2 == '\x05')) || (cVar2 == '\x06')) {
              FUN_006c93de(cVar2,*(undefined4 *)(pcVar5 + 1));
            }
          }
          *pcVar5 = *(char *)(param_1 + 0x10);
          *(undefined4 *)(pcVar5 + 1) = *(undefined4 *)(param_1 + 0x14);
        }
        else {
          FUN_006c93de(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
        }
        FUN_008161f1(0);
        if (local_8 == 0) {
          if (param_4 != 0) {
            FUN_0051c175();
          }
        }
        else {
          FUN_008161f1(0);
        }
        return 1;
      }
    }
  }
  return 0;
}


