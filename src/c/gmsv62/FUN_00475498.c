/* FUN_00475498 - 0x00475498 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00475498(void)

{
  undefined4 uVar1;
  ushort uVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = DAT_009796d4;
  FUN_00475ac6();
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar2 = FUN_00424561();
  if (uVar2 == 0x10) {
    FUN_004755aa(uVar1);
  }
  else if (uVar2 == 0x11) {
    FUN_00475565(uVar1);
  }
  else if (uVar2 == 0x12) {
    FUN_004756a1(uVar1);
  }
  else if (uVar2 == 0x13) {
    FUN_0047581c(uVar1);
  }
  else if (uVar2 == 0x14) {
    FUN_00866e3a(uVar1);
  }
  else if (uVar2 == 0x15) {
    FUN_00475872(uVar1);
  }
  else if ((uVar2 < 0x1a) || (0x5b < uVar2)) {
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      (*(code *)**(undefined4 **)(*(int *)(unaff_EBP + -0x10) + 8))(uVar2,uVar1);
    }
  }
  else {
    FUN_008335c3(uVar2,uVar1);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00475ae3();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


