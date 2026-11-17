/* FUN_00617d5e - 0x00617d5e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __fastcall FUN_00617d5e(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uStack_c;
  
  uVar2 = *(uint *)(param_1 + 0x78);
  if ((*(int *)(uVar2 + 0x38) != 0) && (0x7fffffff < *(uint *)(param_1 + 0xe8))) {
    uStack_c = 0x617d7e;
    uVar1 = FUN_004133f0();
    uVar2 = uVar1 / 10;
    if (uVar1 % 10 < 2) {
      uStack_c = 10;
      FUN_00679e4e(&uStack_c,0x3ee);
      uVar2 = FUN_0061d152();
      if (-1 < (int)uVar2) {
        *(uint *)(param_1 + 0xe8) = uVar2;
        uStack_c = 0x617dba;
        uVar2 = FUN_006142ef();
      }
    }
  }
  return uVar2;
}


