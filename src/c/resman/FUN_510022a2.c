/* FUN_510022a2 - 0x510022a2 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


undefined4 FUN_510022a2(void)

{
  int iVar1;
  
  DAT_5100984c = LoadLibraryA(s_PCOM_DLL_51009160);
  if (DAT_5100984c != (HMODULE)0x0) {
    iVar1 = FUN_510022d4(DAT_5100984c);
    if (iVar1 != 0) {
      FreeLibrary(DAT_5100984c);
      return 1;
    }
  }
  return 0;
}


