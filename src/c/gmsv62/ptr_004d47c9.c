/* ptr_004d47c9 - 0x004d47c9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_004d47c9(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x28);
  while (iVar2 != 0) {
    puVar1 = (undefined4 *)(iVar2 + 0x10);
    iVar2 = *(int *)(iVar2 + 4);
    (*(code *)**(undefined4 **)*puVar1)();
  }
  return;
}


