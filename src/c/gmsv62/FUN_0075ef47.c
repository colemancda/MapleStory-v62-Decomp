/* FUN_0075ef47 - 0x0075ef47 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0075ef47(void)

{
  int iVar1;
  int unaff_EBP;
  undefined4 uVar2;
  
  FUN_00879bb8();
  iVar1 = *(int *)(unaff_EBP + 8);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      FUN_0045b90e(unaff_EBP + -0x10);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      uVar2 = 0;
      FUN_0045ed72(0);
      uVar2 = FUN_0045ee27(uVar2);
      FUN_0075efca(uVar2);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
    }
    else if ((iVar1 == 1000) && (DAT_0097bea8 != 0)) {
      FUN_0075f095();
    }
    FUN_0078a282(*(undefined4 *)(unaff_EBP + 8));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


