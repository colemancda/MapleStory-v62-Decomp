/* FUN_50404b2f - 0x50404b2f in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


int FUN_50404b2f(void)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int extraout_ECX;
  int iVar10;
  int unaff_EBP;
  
  FUN_5042a430();
  FUN_50404f7d((void *)(extraout_ECX + 0x20),*(int *)(unaff_EBP + 8));
  puVar2 = *(undefined4 **)(extraout_ECX + 0x24);
  *(undefined4 **)(unaff_EBP + 8) = puVar2;
  FUN_50401895();
  iVar3 = *(int *)(extraout_ECX + 0x24);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar9 = (int *)FUN_504054e6((void *)(iVar3 + 8));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *piVar9 = extraout_ECX;
  *(int **)(extraout_ECX + 0x28) = piVar9;
  piVar9 = puVar2 + 1;
  *piVar9 = *piVar9 + -1;
  if (*piVar9 == 0) {
    *puVar2 = 0;
  }
  uVar4 = *(undefined4 *)(unaff_EBP + 0x18);
  uVar5 = *(undefined4 *)(unaff_EBP + 0x14);
  iVar3 = *(int *)(unaff_EBP + 0xc);
  *(undefined4 *)(extraout_ECX + 0x38) = *(undefined4 *)(unaff_EBP + 0x10);
  *(int *)(extraout_ECX + 0x34) = iVar3;
  (*DAT_50438c0c)(extraout_ECX + 0x3c,0,0,uVar5,uVar4);
  iVar6 = *(int *)(unaff_EBP + 0x1c);
  *(undefined4 *)(extraout_ECX + 0x50) = *(undefined4 *)(unaff_EBP + 0x20);
  *(int *)(extraout_ECX + 0x4c) = iVar6;
  *(float *)(extraout_ECX + 0x54) = DAT_5042d2bc;
  *(int *)(extraout_ECX + 0x54) = *(int *)(extraout_ECX + 0x54) + (iVar3 + iVar6) * -0x800000;
  *(float *)(extraout_ECX + 0x58) = DAT_5042d2bc;
  iVar10 = *(int *)(unaff_EBP + 0x20) + iVar3;
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + 0x14);
  iVar7 = *(int *)(unaff_EBP + 0x28);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  lVar1 = *(longlong *)(unaff_EBP + -0x14);
  *(int *)(extraout_ECX + 0x58) = *(int *)(extraout_ECX + 0x58) + iVar10 * -0x800000;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(float *)(extraout_ECX + 0x5c) = (float)lVar1 + DAT_5042d2bc;
  *(int *)(extraout_ECX + 0x5c) = *(int *)(extraout_ECX + 0x5c) + (iVar3 + iVar6) * -0x800000;
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + 0x18);
  *(float *)(extraout_ECX + 0x60) = (float)*(longlong *)(unaff_EBP + -0x14) + DAT_5042d2bc;
  *(int *)(extraout_ECX + 0x60) = *(int *)(extraout_ECX + 0x60) + iVar10 * -0x800000;
  iVar3 = *(int *)(unaff_EBP + 0x10);
  *(undefined4 *)(extraout_ECX + 0x74) = 0;
  if ((iVar3 != iVar7) && (*(int *)(unaff_EBP + 0x10) == 0x33545844)) {
    *(uint *)(unaff_EBP + 0x1c) = iVar6 + (-(uint)(iVar7 != 0x33545844) & (iVar7 != 0x1a) + 1);
    *(int *)(unaff_EBP + 0x20) =
         *(int *)(unaff_EBP + 0x20) -
         (-(uint)(iVar7 != 0x33545844) & ((iVar7 != 0x1a) - 1 & 0xfffffffe) + 4);
  }
  piVar9 = (int *)(extraout_ECX + 100);
  FUN_504078fe(piVar9,(int *)0x0);
  (**(code **)(**(int **)(unaff_EBP + 0x24) + 0x50))
            (*(undefined4 *)(unaff_EBP + 0x24),1 << ((byte)*(undefined4 *)(unaff_EBP + 0x1c) & 0x1f)
             ,1 << ((byte)*(undefined4 *)(unaff_EBP + 0x20) & 0x1f),1,0,
             *(undefined4 *)(unaff_EBP + 0x28),1,piVar9);
  FUN_504078fe((int *)(extraout_ECX + 0x68),(int *)0x0);
  piVar8 = (int *)*piVar9;
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 0x3c))(piVar8,0,(int *)(extraout_ECX + 0x68));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *piVar9;
}


