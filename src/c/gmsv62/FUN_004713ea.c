/* FUN_004713ea - 0x004713ea in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


char * FUN_004713ea(char *param_1,undefined4 param_2)

{
  int iVar1;
  
  while( true ) {
    if (*param_1 == '\0') {
      return (char *)0x0;
    }
    iVar1 = FUN_004713c4(*param_1,param_2);
    if (iVar1 != 0) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}


