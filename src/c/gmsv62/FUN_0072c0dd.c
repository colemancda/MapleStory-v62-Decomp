/* FUN_0072c0dd - 0x0072c0dd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0072c0dd(void)

{
  ushort *puVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    bVar2 = (byte)iVar3;
    puVar1 = (ushort *)FUN_0072c7f4(0xffffffff);
    iVar3 = iVar3 + 1;
    *puVar1 = (ushort)bVar2;
  } while (iVar3 < 0x24);
  return;
}


