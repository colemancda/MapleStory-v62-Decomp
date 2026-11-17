/* FUN_00402aba - 0x00402aba in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00402aba(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_00969e94)();
  if (iVar1 != 0) {
    while( true ) {
      iVar1 = (*(code *)PTR_FUN_00969e94)();
      if (iVar1 == 0) break;
      (*DAT_0097b3ec)(0);
    }
  }
  return;
}


