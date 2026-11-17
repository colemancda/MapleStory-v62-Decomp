/* FUN_00834d98 - 0x00834d98 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00834d98(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = FUN_004becbc(200,0);
  if (iVar1 != 0) {
    if ((*(int *)(unaff_EBP + 8) / -10000 == 0xdd) && (*(int *)(DAT_00978358 + 0x4e0) != 0)) {
      iVar1 = FUN_0055421e(-*(int *)(unaff_EBP + 8));
      if (iVar1 != 0) {
        uVar2 = FUN_00679d22(unaff_EBP + 8,0x10b8);
        *(undefined4 *)(unaff_EBP + -4) = 0;
        FUN_00471102(uVar2,0xc);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00414ebb();
        goto LAB_00834e56;
      }
    }
    FUN_0060142b(0x44,0,0);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_00457d37(*(undefined4 *)(unaff_EBP + 8));
    FUN_004751b2(unaff_EBP + -0x1c);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0045ebca();
  }
LAB_00834e56:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


