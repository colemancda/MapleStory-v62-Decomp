/* FUN_50401c7b - 0x50401c7b in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 FUN_50401c7b(void)

{
  int iVar1;
  
  DAT_50438fac = LoadLibraryA(s_PCOM_DLL_504351a8);
  if (DAT_50438fac != (HMODULE)0x0) {
    iVar1 = FUN_50401cad(DAT_50438fac);
    if (iVar1 != 0) {
      FreeLibrary(DAT_50438fac);
      return 1;
    }
  }
  return 0;
}


