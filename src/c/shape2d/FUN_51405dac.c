/* FUN_51405dac - 0x51405dac in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 FUN_51405dac(void)

{
  int iVar1;
  
  DAT_51411aec = LoadLibraryA(s_PCOM_DLL_51411468);
  if (DAT_51411aec != (HMODULE)0x0) {
    iVar1 = FUN_51405dde(DAT_51411aec);
    if (iVar1 != 0) {
      FreeLibrary(DAT_51411aec);
      return 1;
    }
  }
  return 0;
}


