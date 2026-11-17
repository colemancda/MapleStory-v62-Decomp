/* FUN_006aabac - 0x006aabac in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


char __fastcall FUN_006aabac(int param_1)

{
  return (*(int *)(*(int *)(param_1 + 0x59c) + 0x48) != 0) + '\x01';
}


