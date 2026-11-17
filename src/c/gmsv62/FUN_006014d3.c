/* FUN_006014d3 - 0x006014d3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Removing unreachable block (ram,0x0060153d) */
/* WARNING: Removing unreachable block (ram,0x0060153f) */
/* WARNING: Removing unreachable block (ram,0x00601651) */
/* WARNING: Removing unreachable block (ram,0x00601653) */
/* WARNING: Removing unreachable block (ram,0x00601598) */
/* WARNING: Removing unreachable block (ram,0x0060159a) */
/* WARNING: Removing unreachable block (ram,0x0060160a) */
/* WARNING: Removing unreachable block (ram,0x0060160c) */
/* WARNING: Removing unreachable block (ram,0x006015d0) */

void FUN_006014d3(void)

{
  int *piVar1;
  ushort *puVar2;
  byte bVar3;
  int iVar4;
  ushort *puVar5;
  undefined4 uVar6;
  ushort uVar7;
  int *extraout_ECX;
  int iVar8;
  int iVar9;
  byte bVar10;
  int unaff_EBP;
  byte *pbVar11;
  
  FUN_00879bb8();
  iVar8 = extraout_ECX[2];
  *(int *)(unaff_EBP + -0x18) = iVar8 + 4;
  *(int *)(unaff_EBP + -0x14) = extraout_ECX[1];
  if ((*(int *)(unaff_EBP + 0x14) != 0) && (extraout_ECX[3] == 0)) {
    *(int *)(unaff_EBP + -0x1c) = iVar8;
    iVar8 = 3;
    do {
      iVar9 = *(int *)(unaff_EBP + -0x1c);
      pbVar11 = *(byte **)(unaff_EBP + -0x14);
      bVar10 = 0;
      do {
        bVar10 = (*pbVar11 << 3 | *pbVar11 >> 5) + (byte)iVar9 ^ bVar10;
        bVar3 = (byte)iVar9 & 7;
        *pbVar11 = ~(bVar10 >> bVar3 | bVar10 << 8 - bVar3) + 0x48;
        pbVar11 = pbVar11 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      iVar9 = *(int *)(unaff_EBP + -0x1c);
      bVar10 = 0;
      do {
        pbVar11 = pbVar11 + -1;
        bVar10 = (*pbVar11 << 4 | *pbVar11 >> 4) + (char)iVar9 ^ bVar10;
        *pbVar11 = (bVar10 ^ 0x13) >> 3 | (bVar10 ^ 0x13) << 5;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    extraout_ECX[3] = 1;
  }
  iVar8 = 0x5b4;
  if (*(uint *)(unaff_EBP + -0x18) < 0x5b4) {
    iVar8 = *(int *)(unaff_EBP + -0x18);
  }
  iVar4 = FUN_00474dfe(iVar8,unaff_EBP + -0xd);
  *(int *)(unaff_EBP + -0x20) = iVar4;
  iVar9 = 0;
  if (iVar4 != 0) {
    InterlockedIncrement((LONG *)(iVar4 + 4));
    iVar9 = *(int *)(unaff_EBP + -0x20);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*extraout_ECX != 0) {
    *(int *)(iVar9 + 8) = iVar9;
    iVar9 = *(int *)(unaff_EBP + -0x20);
  }
  puVar2 = *(ushort **)(iVar9 + 0x10);
  if (*(undefined4 **)(unaff_EBP + 0x10) == (undefined4 *)0x0) {
    uVar7 = (ushort)*(undefined4 *)(unaff_EBP + 0xc);
  }
  else {
    uVar7 = (ushort)((uint)**(undefined4 **)(unaff_EBP + 0x10) >> 0x10) ^
            (ushort)*(undefined4 *)(unaff_EBP + 0xc);
  }
  *puVar2 = uVar7;
  if (*(int *)(unaff_EBP + 0x14) == 0) {
    uVar7 = (ushort)extraout_ECX[2];
  }
  else {
    uVar7 = uVar7 ^ (ushort)extraout_ECX[2];
  }
  puVar2[1] = uVar7;
  puVar5 = puVar2 + 2;
  if (*(int *)(unaff_EBP + 0x14) == 0) {
    iVar9 = (int)puVar2 + (iVar8 - (int)puVar5);
    FUN_00879c20(puVar5,*(undefined4 *)(unaff_EBP + -0x14),iVar9);
  }
  else {
    iVar9 = (int)puVar2 + (iVar8 - (int)puVar5);
    FUN_00420479(puVar5,*(undefined4 *)(unaff_EBP + -0x14),iVar9,unaff_EBP + 0x18);
  }
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + iVar9;
  FUN_004759d7(unaff_EBP + -0x24);
  while( true ) {
    piVar1 = (int *)(unaff_EBP + -0x18);
    *piVar1 = *piVar1 - iVar8;
    if (*piVar1 == 0) break;
    iVar8 = 0x5b4;
    if (*(uint *)(unaff_EBP + -0x18) < 0x5b4) {
      iVar8 = *(int *)(unaff_EBP + -0x18);
    }
    uVar6 = FUN_00474dfe(iVar8,unaff_EBP + 0xf);
    FUN_0047598f(uVar6);
    if (*extraout_ECX != 0) {
      *(int *)(*(int *)(unaff_EBP + -0x20) + 8) = *(int *)(unaff_EBP + -0x20);
    }
    iVar9 = *(int *)(*(int *)(unaff_EBP + -0x20) + 0x10);
    if (*(int *)(unaff_EBP + 0x14) == 0) {
      iVar4 = (iVar9 + iVar8) - iVar9;
      FUN_00879c20(iVar9,*(undefined4 *)(unaff_EBP + -0x14),iVar4);
    }
    else {
      iVar4 = (iVar9 + iVar8) - iVar9;
      FUN_00420479(iVar9,*(undefined4 *)(unaff_EBP + -0x14),iVar4,unaff_EBP + 0x18);
    }
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + iVar4;
    FUN_00475c3f();
    FUN_004759f0(unaff_EBP + -0x24);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    FUN_00475b89(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


