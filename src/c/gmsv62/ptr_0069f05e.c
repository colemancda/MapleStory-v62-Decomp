/* ptr_0069f05e - 0x0069f05e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_0069f05e(int param_1)

{
  DWORD DVar1;
  uint uVar2;
  
  DVar1 = timeGetTime();
  if ((int)(DVar1 - *(int *)(param_1 + 0x90)) < 0) {
    DVar1 = timeGetTime();
    uVar2 = (*(int *)(param_1 + 0x90) - DVar1) / 1000;
  }
  else {
    uVar2 = 0;
  }
  if (*(uint *)(param_1 + 0x94) != uVar2) {
    *(uint *)(param_1 + 0x94) = uVar2;
    if (uVar2 < 0x79) {
      FUN_008161f1(0);
    }
    FUN_008162ff();
  }
  return;
}


