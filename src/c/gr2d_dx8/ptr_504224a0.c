/* ptr_504224a0 - 0x504224a0 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ptr_504224a0(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar7 = uRam5043a23c;
  uVar6 = uRam5043a238;
  uVar9 = uRam5043a234;
  uVar5 = _DAT_5043a230;
  uVar4 = uRam5043a22c;
  uVar3 = uRam5043a228;
  uVar2 = uRam5043a224;
  uVar1 = _DAT_5043a220;
  uVar8 = param_2;
  FUN_504294b0();
  uVar9 = param_2 & uVar9;
  *param_1 = uVar1 ^ param_2 & uVar5;
  param_1[1] = uVar2 ^ uVar9;
  param_1[2] = uVar3 ^ uVar8 & uVar6;
  param_1[3] = uVar4 ^ uVar8 & uVar7;
  uVar3 = uRam5043a21c;
  uVar2 = uRam5043a218;
  uVar1 = uRam5043a214;
  param_1[4] = _DAT_5043a210;
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar4 = uRam5043a20c;
  uVar3 = uRam5043a208;
  uVar2 = uRam5043a204;
  uVar1 = _DAT_5043a200;
  param_1[8] = uVar8 & uVar6;
  param_1[9] = uVar9;
  param_1[10] = param_2 & uVar5;
  param_1[0xb] = uVar9;
  param_1[0xc] = uVar1;
  param_1[0xd] = uVar2;
  param_1[0xe] = uVar3;
  param_1[0xf] = uVar4;
  return;
}


