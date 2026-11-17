/* FUN_008280f6 - 0x008280f6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_008280f6(char *param_1)

{
  size_t sVar1;
  
  sVar1 = _strlen(param_1);
  if ((0 < (int)sVar1) && (param_1[sVar1 - 1] == '/')) {
    param_1[sVar1 - 1] = '\0';
  }
  sVar1 = _strlen(param_1);
  do {
    sVar1 = sVar1 - 1;
    if ((int)sVar1 < 1) {
      return;
    }
  } while (param_1[sVar1] != '/');
  param_1[sVar1] = '\0';
  return;
}


