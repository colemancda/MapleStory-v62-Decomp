/* ptr_00438d37 - 0x00438d37 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int ptr_00438d37(void)

{
  int *piVar1;
  int iVar2;
  int *in_EAX;
  undefined4 unaff_EBX;
  int unaff_EBP;
  undefined4 unaff_ESI;
  
  if (*in_EAX != 0) {
    if ((*(byte *)(unaff_EBP + 0xc) & 1) == 0) {
      FUN_00879c20();
    }
    FUN_00402b41(**(int **)(unaff_EBP + -4) + -4);
  }
  **(undefined4 **)(unaff_EBP + -4) = unaff_ESI;
  piVar1 = *(int **)(unaff_EBP + -4);
  iVar2 = *piVar1;
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + -4) = unaff_EBX;
  }
  return *piVar1;
}


