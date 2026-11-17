/* FUN_007f9b12 - 0x007f9b12 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __fastcall FUN_007f9b12(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_00402aba();
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar3 = *(uint *)(param_1 + 0xc);
  uVar4 = *(uint *)(param_1 + 0x14);
  piVar1 = (int *)(param_1 + 0x1c);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return (((((uVar2 & 0x3f800000 ^ uVar2 >> 2) >> 4 ^ uVar3) >> 8 ^ uVar4) >> 3 ^ uVar4 & 0x1fffff00
          ) >> 2 ^ uVar3 & 0x7ffc0) >> 6 ^
         (((uVar4 & 0xfffffff0) << 5 ^ uVar3 & 0xfffffffe) << 8 ^ uVar2 & 0xfffffff8) << 4;
}


