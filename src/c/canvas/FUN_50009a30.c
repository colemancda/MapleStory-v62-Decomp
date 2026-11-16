/* FUN_50009a30 - 0x50009a30 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


uint __cdecl FUN_50009a30(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = param_1[1];
  iVar1 = *param_1;
  uVar3 = param_1[2];
  uVar5 = uVar3;
  uVar6 = uVar3;
  if (iVar2 != 0) {
    if ((int)uVar3 < 0x80) {
      uVar4 = (int)(uVar3 * 0x100 + uVar3 * iVar2) >> 8;
    }
    else {
      uVar4 = (uVar3 - ((int)(uVar3 * iVar2 + 0xff) >> 8)) + iVar2;
    }
    iVar2 = iVar1 * 6 + 2 >> 8;
    uVar6 = uVar3 * 2 - uVar4;
    uVar5 = uVar6;
    if (iVar2 == 0) {
      uVar3 = uVar4;
      uVar6 = ((int)((uVar4 - uVar6) * iVar1 * 6) >> 8) + uVar6;
    }
    else if (iVar2 == 1) {
      uVar3 = ((int)((uVar4 - uVar6) * (0x55 - iVar1) * 6) >> 8) + uVar6;
      uVar6 = uVar4;
    }
    else {
      uVar3 = uVar6;
      if (iVar2 == 2) {
        iVar2 = (uVar4 - uVar6) * (iVar1 + -0x55);
      }
      else {
        uVar5 = uVar4;
        if (iVar2 == 3) {
          uVar6 = ((int)((uVar4 - uVar6) * (0xaa - iVar1) * 6) >> 8) + uVar6;
          goto LAB_50009b23;
        }
        if (iVar2 == 4) {
          uVar3 = ((int)((uVar4 - uVar6) * (iVar1 + -0xaa) * 6) >> 8) + uVar6;
          goto LAB_50009b23;
        }
        iVar2 = (uVar4 - uVar6) * (0xff - iVar1);
        uVar3 = uVar4;
        uVar4 = uVar6;
      }
      uVar5 = (iVar2 * 6 >> 8) + uVar6;
      uVar6 = uVar4;
    }
  }
LAB_50009b23:
  return (uVar3 << 8 | uVar6) << 8 | uVar5;
}


