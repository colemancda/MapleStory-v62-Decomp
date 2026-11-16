/* FUN_50809a5b - 0x50809a5b in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 FUN_50809a5b(void)

{
  int iVar1;
  
  DAT_5081eb04 = LoadLibraryA(s_PCOM_DLL_5081e3f0);
  if (DAT_5081eb04 != (HMODULE)0x0) {
    iVar1 = FUN_50809a8d(DAT_5081eb04);
    if (iVar1 != 0) {
      FreeLibrary(DAT_5081eb04);
      return 1;
    }
  }
  return 0;
}


