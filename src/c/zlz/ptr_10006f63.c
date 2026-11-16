/* ptr_10006f63 - 0x10006f63 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void __fastcall ptr_10006f63(undefined4 param_1,undefined4 param_2)

{
  undefined4 unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_EDI;
  undefined4 in_stack_00000024;
  int in_stack_00000028;
  
  *(undefined4 *)(unaff_ESI + 0x20) = in_stack_00000024;
  *(undefined4 *)(unaff_ESI + 0x1c) = unaff_EBX;
  unaff_EDI[1] = in_stack_00000028;
  unaff_EDI[2] = unaff_EDI[2] + (unaff_EBP - *unaff_EDI);
  *unaff_EDI = unaff_EBP;
  *(undefined4 *)(unaff_ESI + 0x34) = param_2;
  FUN_10008290(unaff_ESI,(int)unaff_EDI,1);
  return;
}


