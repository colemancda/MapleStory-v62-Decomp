/* FUN_004fa70f - 0x004fa70f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004fa70f(int param_1,int param_2)

{
  char cVar1;
  
  cVar1 = FUN_0042452b();
  if (cVar1 != -1) {
    FUN_0043f6a6(1,((uint)(*(char *)(param_2 + 0x88) != '\0') + (uint)(cVar1 != '\0') * 2) * 0xc4 +
                   0x750 + param_1);
  }
  return;
}


