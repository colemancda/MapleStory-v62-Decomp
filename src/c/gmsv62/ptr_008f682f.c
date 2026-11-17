/* ptr_008f682f - 0x008f682f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall ptr_008f682f(byte param_1)

{
  char *pcVar1;
  int unaff_EDI;
  
  pcVar1 = _DAT_4516ec81;
  *(byte *)(unaff_EDI + 0x6d9b11d0) = *(byte *)(unaff_EDI + 0x6d9b11d0) & param_1;
  *pcVar1 = *pcVar1 + (char)pcVar1;
  pcVar1[0x1b] = pcVar1[0x1b] >> 3;
  return;
}


