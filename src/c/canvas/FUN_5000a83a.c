/* FUN_5000a83a - 0x5000a83a in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 FUN_5000a83a(void)

{
  int iVar1;
  
  DAT_50081ff4 = LoadLibraryA(s_PCOM_DLL_50019480);
  if (DAT_50081ff4 != (HMODULE)0x0) {
    iVar1 = FUN_5000a86c(DAT_50081ff4);
    if (iVar1 != 0) {
      FreeLibrary(DAT_50081ff4);
      return 1;
    }
  }
  return 0;
}


