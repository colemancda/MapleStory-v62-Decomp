/* ptr_0042fa7f - 0x0042fa7f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_0042fa7f(void)

{
  undefined4 uVar1;
  undefined4 *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  
  if (unaff_EBX != (undefined4 *)0x0) {
    if (*(undefined4 **)(unaff_ESI + 0x38) != unaff_EBX) {
      unaff_EBX = (undefined4 *)**(undefined4 **)(unaff_ESI + 0x38);
    }
    FUN_00424df4();
    uVar1 = FUN_00404abb();
    FUN_00424df4(uVar1);
    uVar1 = FUN_00404a94();
    uVar1 = FUN_007d3c48(uVar1);
    FUN_007d4763(unaff_EBX,0x1c,uVar1);
  }
  FUN_004027eb();
  FUN_004125d9();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


