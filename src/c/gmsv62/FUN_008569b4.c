/* FUN_008569b4 - 0x008569b4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_008569b4(int param_1)

{
  char *pcVar1;
  
  if (*(int *)(param_1 + 0x2cac) == 0) {
    return 0;
  }
  pcVar1 = *(char **)(*(int *)(param_1 + 0x2cb4) + 0xc);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    pcVar1 = *(char **)(*(int *)(param_1 + 0x2cb4) + 0x10);
    if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
      return 5;
    }
    return 4;
  }
  return 3;
}


