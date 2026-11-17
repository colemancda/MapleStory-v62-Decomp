/* FUN_008584ae - 0x008584ae in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_008584ae(int param_1)

{
  char *pcVar1;
  
  if (*(int *)(param_1 + 0x2cd2) == 0) {
    return 0;
  }
  pcVar1 = *(char **)(*(int *)(param_1 + 0x2ce8) + 0xc);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    pcVar1 = *(char **)(*(int *)(param_1 + 0x2ce8) + 0x10);
    if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
      return 5;
    }
    return 4;
  }
  return 3;
}


