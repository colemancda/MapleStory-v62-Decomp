/* FUN_008280b0 - 0x008280b0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_008280b0(char *param_1)

{
  size_t sVar1;
  int iVar2;
  
  sVar1 = _strlen(param_1);
  iVar2 = 0;
  if (0 < (int)sVar1) {
    do {
      if (param_1[iVar2] == '\\') {
        param_1[iVar2] = '/';
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)sVar1);
  }
  return;
}


