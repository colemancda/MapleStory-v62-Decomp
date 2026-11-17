/* ptr_0044db49 - 0x0044db49 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_0044db49(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + 0x14);
  puVar2 = *(undefined4 **)(unaff_EBP + 0x10);
  *puVar2 = param_2;
  if (iVar1 != 0) {
    puVar2[1] = 0xd;
    puVar2[2] = 0xf;
    puVar2[3] = 0x10;
  }
  return;
}


