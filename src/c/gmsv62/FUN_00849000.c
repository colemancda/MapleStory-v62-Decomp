/* FUN_00849000 - 0x00849000 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00849000(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (DAT_00978360 != 0) {
    iVar1 = (*DAT_0097b704)();
    iVar2 = FUN_007c0ccd(*(undefined4 *)(unaff_EBP + 8));
    if (iVar2 == 0) {
      uVar3 = FUN_00679d22(unaff_EBP + 8,0x17e);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_00471102(uVar3,0xc);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
    else {
      if (299999 < iVar1 - *(int *)(extraout_ECX + 0x3118)) {
        *(int *)(extraout_ECX + 0x3118) = iVar1;
        FUN_0060142b(0x57,0,0);
        uVar3 = *(undefined4 *)(iVar2 + 0xd78);
        *(undefined4 *)(unaff_EBP + -4) = 2;
        FUN_00457d37(uVar3);
        FUN_00457cda(*(undefined4 *)(unaff_EBP + 0xc));
        FUN_004751b2(unaff_EBP + -0x1c);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_0045ebca();
        goto LAB_008490f4;
      }
      uVar3 = FUN_00679d22(unaff_EBP + 0xc,0x141);
      *(undefined4 *)(unaff_EBP + -4) = 1;
      FUN_00471102(uVar3,0xc);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
    FUN_00414ebb();
  }
LAB_008490f4:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


