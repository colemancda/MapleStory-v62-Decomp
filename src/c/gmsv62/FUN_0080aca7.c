/* FUN_0080aca7 - 0x0080aca7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0080aca7(void)

{
  int unaff_EBP;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int *piStack_14;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  piStack_14 = (int *)0x1;
  uStack_18 = *(undefined4 *)(unaff_EBP + 0x14);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 0x18) == 0) {
    uStack_1c = 0;
    uStack_20 = *(undefined4 *)(unaff_EBP + 0x10);
    *(undefined1 **)(unaff_EBP + 0x14) = auStack_24;
    FUN_00433bdf(unaff_EBP + 0xc);
    FUN_0080a35a(*(undefined4 *)(unaff_EBP + 8));
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
  }
  else {
    uStack_1c = *(undefined4 *)(unaff_EBP + 0x10);
    uStack_20 = 0;
    *(undefined1 **)(unaff_EBP + 0x14) = auStack_24;
    FUN_00433bdf(unaff_EBP + 0xc);
    FUN_0080a35a(*(undefined4 *)(unaff_EBP + 8));
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
  }
  piStack_14 = *(int **)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piStack_14 != (int *)0x0) {
    uStack_18 = 0x80ad1d;
    (**(code **)(*piStack_14 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}


