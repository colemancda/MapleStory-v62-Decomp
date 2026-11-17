/* FUN_0048ee72 - 0x0048ee72 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0048ee72(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBP;
  int iVar6;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x24) = extraout_ECX;
  if (*(int *)(unaff_EBP + 8) == 1000) {
    iVar1 = FUN_004029b9(0x98);
    *(int *)(unaff_EBP + 8) = iVar1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_0048f045(extraout_ECX + 100);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uVar2 = -(uint)(iVar1 != 0) & iVar1 + 8U;
    *(uint *)(unaff_EBP + -0x28) = -(uint)(uVar2 != 0) & uVar2 - 8;
    FUN_00495c8e();
    *(undefined4 *)(unaff_EBP + -4) = 1;
    puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x11d8);
    uVar4 = *puVar3;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_004bc5f0(uVar4,1,0);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + 8) != 0) {
      FUN_00403384(*(int *)(unaff_EBP + 8) + -0xc);
    }
    iVar1 = FUN_004bc6a2();
    if (iVar1 == 1) {
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_0048f3d3(unaff_EBP + -0x14,unaff_EBP + -0x1c,unaff_EBP + -0x18);
      *(undefined4 *)(unaff_EBP + -0x38) = 0;
      *(undefined4 *)(unaff_EBP + -0x34) = 0;
      *(undefined4 *)(unaff_EBP + -0x30) = 0;
      *(undefined ***)(unaff_EBP + -0x40) = &PTR_FUN_008e908c;
      iVar1 = DAT_00978368;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      while ((iVar5 = *(int *)(iVar1 + 0x3278), iVar5 != 0 &&
             (*(uint *)(unaff_EBP + -0x10) < *(uint *)(iVar5 + -4)))) {
        iVar6 = *(uint *)(unaff_EBP + -0x10) * 8;
        iVar5 = *(int *)(iVar6 + 4 + iVar5);
        if ((((*(int *)(iVar5 + 0x40) != 0) && (*(int *)(iVar5 + 0x30) < 1)) &&
            (*(int *)(iVar5 + 0x20) <= *(int *)(unaff_EBP + -0x18))) &&
           (*(int *)(unaff_EBP + -0x1c) <= *(int *)(iVar5 + 0x20))) {
          *(undefined4 *)(unaff_EBP + -0x20) = DAT_00973a94;
          uVar4 = FUN_0045e2eb();
          FUN_0045a1d8(unaff_EBP + 8,uVar4);
          *(undefined1 *)(unaff_EBP + -4) = 5;
          FUN_00495ba8();
          iVar5 = FUN_004538dc(*(undefined4 *)(unaff_EBP + -0x14),0,0);
          if (-1 < iVar5) {
            FUN_00495c75(*(int *)(iVar1 + 0x3278) + iVar6);
          }
          *(undefined1 *)(unaff_EBP + -4) = 4;
          FUN_00414ebb();
        }
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
      }
      FUN_0045dfce(unaff_EBP + -0x40);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      *(undefined ***)(unaff_EBP + -0x40) = &PTR_FUN_008e908c;
      FUN_0045f705();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00414ebb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00495cab();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


