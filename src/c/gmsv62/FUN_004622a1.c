/* FUN_004622a1 - 0x004622a1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004622a1(void)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = DAT_00978368;
  uVar2 = FUN_0042452b();
  *(undefined1 *)(iVar1 + 0x2045) = uVar2;
  return;
}


