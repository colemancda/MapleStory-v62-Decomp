/* FUN_50009dd9 - 0x50009dd9 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


uint __thiscall FUN_50009dd9(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  
  uVar6 = param_1 >> 0x10 & 0xff;
  uVar11 = param_1 >> 8 & 0xff;
  uVar12 = param_1 & 0xff;
  iVar1 = *(int *)this + uVar12;
  iVar7 = *(int *)((int)this + 4) + uVar11;
  iVar8 = *(int *)((int)this + 8) + uVar6;
  iVar9 = *(int *)((int)this + 0xc) + (param_1 >> 0x18);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  if (iVar7 < 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar7;
    if (0xff < iVar7) {
      iVar2 = 0xff;
    }
  }
  if (iVar8 < 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar8;
    if (0xff < iVar8) {
      iVar3 = 0xff;
    }
  }
  if (iVar9 < 0) {
    iVar13 = 0;
  }
  else {
    iVar13 = 0xff;
    if (iVar9 < 0x100) {
      iVar13 = iVar9;
    }
  }
  uVar4 = (iVar3 >> 4) << 4 | iVar3 >> 4;
  uVar5 = (iVar13 >> 4) << 4 | iVar13 >> 4;
  uVar10 = (iVar1 >> 4) << 4 | iVar1 >> 4;
  uVar14 = (iVar2 >> 4) << 4 | iVar2 >> 4;
  if (*(int *)this + -1 + uVar12 < 0xfe) {
    *(int *)this = ((int)(uVar12 - uVar10) >> 1) + *(int *)this;
  }
  if (iVar7 - 1U < 0xfe) {
    *(int *)((int)this + 4) = ((int)(uVar11 - uVar14) >> 1) + *(int *)((int)this + 4);
  }
  if (iVar8 - 1U < 0xfe) {
    *(int *)((int)this + 8) = ((int)(uVar6 - uVar4) >> 1) + *(int *)((int)this + 8);
  }
  if (iVar9 - 1U < 0xfe) {
    *(int *)((int)this + 0xc) = ((int)((param_1 >> 0x18) - uVar5) >> 1) + *(int *)((int)this + 0xc);
  }
  return ((uVar5 & 0xf0) << 4 | uVar4 & 0xf0) << 4 | uVar10 >> 4 & 0xf | uVar14 & 0xffff00f0;
}


