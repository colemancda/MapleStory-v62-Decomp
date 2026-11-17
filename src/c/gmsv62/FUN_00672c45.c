/* FUN_00672c45 - 0x00672c45 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00672c45(void)

{
  LONG LVar1;
  FARPROC pFVar2;
  
  LVar1 = InterlockedDecrement((LONG *)&DAT_0097bb40);
  if (LVar1 == 0) {
    pFVar2 = GetProcAddress(DAT_0097bc58,s_PcTermModule_00969f90);
    if (pFVar2 != (FARPROC)0x0) {
      (*pFVar2)();
    }
    FreeLibrary(DAT_0097bc58);
    DAT_0097bc58 = (HMODULE)0x0;
  }
  return;
}


