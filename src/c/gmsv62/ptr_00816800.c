/* ptr_00816800 - 0x00816800 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00816800(void)

{
  int iVar1;
  uint in_EAX;
  uint uVar2;
  int unaff_ESI;
  
  while( true ) {
    iVar1 = *(int *)(in_EAX + 4);
    FUN_0040294d(in_EAX);
    uVar2 = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
    if (uVar2 == 0) break;
    in_EAX = -(uint)(uVar2 != 0) & uVar2 - 0x10;
  }
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  *(undefined4 *)(unaff_ESI + 8) = 0;
  return;
}


