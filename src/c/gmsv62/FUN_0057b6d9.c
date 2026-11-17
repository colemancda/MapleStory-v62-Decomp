/* FUN_0057b6d9 - 0x0057b6d9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0057b6d9(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar4;
  
  FUN_00879bb8();
  if ((*(byte *)(unaff_EBP + 0xf) & 0x80) == 0) {
    if (*(int *)(unaff_EBP + 8) == 0xd) {
      if (*(int *)(extraout_ECX + 0xd0) == 0x3ea) {
        puVar3 = (undefined4 *)FUN_0045b90e(unaff_EBP + 8);
        uVar4 = *puVar3;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        iVar1 = *(int *)(extraout_ECX + -4);
        uVar4 = FUN_0087b6ab(uVar4);
        (**(code **)(iVar1 + 0x34))(uVar4);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00414ebb();
        goto LAB_0057b802;
      }
      iVar1 = *(int *)(extraout_ECX + -4);
      uVar4 = 1;
    }
    else {
      if (*(int *)(unaff_EBP + 8) != 0x1b) {
        if (*(int *)(extraout_ECX + 0xd0) == 6) {
          iVar1 = FUN_004029b9(0x2ec);
          *(int *)(unaff_EBP + 0xc) = iVar1;
          *(undefined4 *)(unaff_EBP + -4) = 1;
          if (iVar1 == 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = FUN_0072b99c();
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          uVar2 = -(uint)(iVar1 != 0) & iVar1 + 8U;
          *(uint *)(unaff_EBP + -0x10) = -(uint)(uVar2 != 0) & uVar2 - 8;
          FUN_0057bbbd();
          uVar4 = *(undefined4 *)(extraout_ECX + 0xf0);
          *(undefined4 *)(unaff_EBP + -4) = 2;
          *(undefined4 *)(unaff_EBP + -0x18) = 2;
          *(undefined4 *)(unaff_EBP + -0x20) = 8;
          *(undefined4 *)(unaff_EBP + -0x1c) = 8;
          FUN_0072c3ce(uVar4,unaff_EBP + -0x20);
          FUN_004bc6a2();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_0057bbda();
          goto LAB_0057b802;
        }
        goto LAB_0057b7f5;
      }
      iVar1 = *(int *)(extraout_ECX + -4);
      uVar4 = 0;
    }
    (**(code **)(iVar1 + 0x34))(uVar4);
  }
  else {
LAB_0057b7f5:
    FUN_004bc822(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc));
  }
LAB_0057b802:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


