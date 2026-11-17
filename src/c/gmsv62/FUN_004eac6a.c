/* FUN_004eac6a - 0x004eac6a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004eac6a(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(DAT_00978368 + 0x2cac) == 0) {
    uVar1 = FUN_00679d22(unaff_EBP + 8,0x16e);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00471102(uVar1,0xc);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else {
    if (**(int **)(DAT_00978368 + 0x2cb8) == *(int *)(DAT_00978368 + 0x2088)) {
      FUN_0060142b(0x72,0,0);
      *(undefined4 *)(unaff_EBP + -4) = 2;
      FUN_00457cda(9);
      FUN_00457d37(*(undefined4 *)(DAT_00978368 + 0x2088));
      FUN_00457d37(*(undefined4 *)(unaff_EBP + 8));
      FUN_004751b2(unaff_EBP + -0x20);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0045ebca();
      goto LAB_004ead4a;
    }
    uVar1 = FUN_00679d22(unaff_EBP + -0x10,0x172);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_00471102(uVar1,0xc);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  FUN_00414ebb();
LAB_004ead4a:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


