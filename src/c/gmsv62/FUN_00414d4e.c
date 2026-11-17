/* FUN_00414d4e - 0x00414d4e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00414d4e(char *param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = 0;
  if (param_1 != (char *)0x0) {
    cVar2 = *param_1;
    while (cVar2 != '\0') {
      param_1 = param_1 + 1;
      iVar1 = iVar1 * 0x20 + 1 + (int)cVar2;
      cVar2 = *param_1;
    }
  }
  return iVar1;
}


