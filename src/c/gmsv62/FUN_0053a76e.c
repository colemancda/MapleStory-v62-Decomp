/* FUN_0053a76e - 0x0053a76e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0053a76e(int param_1,undefined4 param_2,int *param_3)

{
  char *pcVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (((uint)param_3 & 0x80000000) == 0) {
    uVar2 = (uint)param_3 >> 0x10 & 0xff;
    if (uVar2 == 0x36) {
      uVar2 = 0x2a;
    }
    pcVar1 = (char *)(uVar2 * 5 + 4 + DAT_00979110);
    if (*pcVar1 == '\x05') {
      if (*(int *)(pcVar1 + 1) == 0x35) {
        piVar3 = (int *)FUN_00486ada(&param_3);
        *(undefined4 *)((-(uint)(*piVar3 != 0) & *piVar3 - 0xcU) + 0x15c) = 1;
        if (param_3 != (int *)0x0) {
          (**(code **)(*param_3 + 8))(param_3);
        }
      }
      else if (*(int *)(pcVar1 + 1) == 0x34) {
        param_3 = (int *)0x0;
        puVar7 = &param_3;
        uVar4 = FUN_0044dddc(*(undefined4 *)(param_1 + 0xa5),puVar7);
        iVar5 = FUN_0053a851(uVar4,puVar7);
        if (iVar5 != 0) {
          iVar6 = FUN_0044dddc(iVar5);
          if ((iVar6 == 0x2d) || (iVar6 = FUN_0044dddc(iVar5), iVar6 == 0x2e)) {
            FUN_007c582b(iVar5,0);
          }
          else {
            FUN_007c56a1(iVar5,param_3);
          }
        }
      }
    }
  }
  return;
}


