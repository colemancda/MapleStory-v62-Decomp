/* FUN_004133f0 - 0x004133f0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __fastcall FUN_004133f0(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  FUN_00402aba();
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar2 = param_1[2];
  param_1[3] = uVar3;
  uVar5 = (uVar3 >> 0xd ^ uVar3 & 0x7ffc0) >> 6 ^ (uVar3 & 0xfffffffe) << 0xc;
  param_1[4] = uVar4;
  uVar4 = (uVar4 & 0x3f800000 ^ uVar4 >> 2) >> 0x17 ^ (uVar4 & 0xfffffff8) << 4;
  param_1[5] = uVar2;
  uVar3 = (uVar2 & 0x1fffff00 ^ uVar2 >> 3) >> 8 ^ (uVar2 & 0xfffffff0) << 0x11;
  param_1[2] = uVar3;
  *param_1 = uVar5;
  param_1[1] = uVar4;
  puVar1 = param_1 + 7;
  *puVar1 = *puVar1 - 1;
  if (*puVar1 == 0) {
    param_1[6] = 0;
  }
  return uVar3 ^ uVar4 ^ uVar5;
}


