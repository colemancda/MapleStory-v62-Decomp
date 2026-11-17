/* FUN_0048f3d3 - 0x0048f3d3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0048f3d3(void)

{
  undefined4 uVar1;
  int extraout_ECX;
  int iVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar1 = FUN_0045b90e(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00414f8b(uVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  uVar1 = 0;
  FUN_0045ed72(0);
  FUN_0045ee27(uVar1);
  FUN_00495ba8();
  iVar2 = *(int *)(*(int *)(extraout_ECX + 0x90) + 0x60);
  if (iVar2 == 0) {
    **(undefined4 **)(unaff_EBP + 0xc) = 0;
    **(undefined4 **)(unaff_EBP + 0x10) = 0x7fffffff;
  }
  else {
    iVar2 = iVar2 * 8;
    **(undefined4 **)(unaff_EBP + 0xc) =
         *(undefined4 *)(**(int **)(extraout_ECX + 0x94) + -8 + iVar2);
    **(undefined4 **)(unaff_EBP + 0x10) =
         *(undefined4 *)(**(int **)(extraout_ECX + 0x94) + -4 + iVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


