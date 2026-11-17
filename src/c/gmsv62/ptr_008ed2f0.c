/* ptr_008ed2f0 - 0x008ed2f0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Instruction at (ram,0x008ed2f1) overlaps instruction at (ram,0x008ed2f0)
    */
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

void __fastcall ptr_008ed2f0(ushort *param_1,int param_2)

{
  int iVar1;
  short sVar2;
  code *pcVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 in_EAX;
  uint uVar9;
  ushort *puVar10;
  ushort *puVar11;
  ushort *extraout_ECX;
  ushort *puVar12;
  ushort *puVar13;
  uint *unaff_EBX;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int unaff_EBP;
  int *piVar17;
  uint unaff_ESI;
  uint uVar18;
  byte bVar19;
  byte in_AF;
  undefined8 uVar20;
  
  while( true ) {
    uVar18 = unaff_ESI ^ *unaff_EBX ^ *unaff_EBX ^ *unaff_EBX;
    bVar19 = 9 < ((byte)in_EAX & 0xf) | in_AF;
    uVar9 = CONCAT31((int3)((uint)in_EAX >> 8),(byte)in_EAX + bVar19 * -6) & 0xffffff0f;
    cVar6 = (char)uVar9;
    puVar10 = (ushort *)
              CONCAT22((short)(uVar9 >> 0x10),CONCAT11((char)((uint)in_EAX >> 8) - bVar19,cVar6));
    *(char *)(puVar10 + -0x10) = (char)puVar10[-0x10] + cVar6;
    *(char **)puVar10 = (char *)(*(int *)puVar10 + (int)puVar10);
    do {
      puVar13 = puVar10;
      puVar10 = (ushort *)((int)puVar13 + 1);
      param_1 = (ushort *)((int)param_1 + -1);
    } while (param_1 != (ushort *)0x0 && puVar10 != (ushort *)0x0);
    *(char **)(puVar13 + 0xb) = (char *)(*(int *)(puVar13 + 0xb) + (int)param_1);
    cVar6 = (char)puVar10;
    *(char *)((int)puVar13 + -0x200fff) = *(char *)((int)puVar13 + -0x200fff) + cVar6;
    *(char *)puVar10 = *(char *)puVar10 + cVar6;
    *(char *)puVar10 = *(char *)puVar10 + cVar6;
    puVar13 = param_1;
    do {
      puVar12 = puVar13;
      puVar11 = puVar10;
      param_1 = (ushort *)((int)puVar11 + 1);
      puVar13 = (ushort *)((int)puVar12 + -1);
      uVar20 = CONCAT44(param_2,puVar13);
      puVar10 = param_1;
    } while (puVar13 != (ushort *)0x0 && param_1 != (ushort *)0x0);
    piVar17 = (int *)(unaff_EBP + uVar18);
    *(char *)(unaff_EBX + -0x803e5) = (char)unaff_EBX[-0x803e5] + (char)unaff_EBX;
    pcVar8 = (char *)((int)puVar11 + -0x411f8e9f);
    *pcVar8 = *pcVar8 + (char)param_2;
    piVar16 = (int *)(*(int *)((char *)((int)puVar12 + 0x75) + (int)puVar13) * -0x29ff9b96);
    iVar4 = *piVar16;
    piVar14 = piVar16 + 1;
    iVar1 = *(int *)puVar13;
    *(code **)puVar13 = ptr_00646c40 + *(int *)puVar13;
    if (!SCARRY4(iVar1,0x646c40)) break;
    pcVar8 = (char *)(iVar4 * 5 + -0x40aaff9d);
    cVar6 = *pcVar8;
    *pcVar8 = *pcVar8 + (char)puVar13;
    sVar2 = ((ushort)puVar13 & 3) - (*puVar13 & 3);
    *puVar13 = *puVar13 + (ushort)(0 < sVar2) * sVar2;
    pcVar3 = (code *)swi(4);
    piVar15 = piVar16 + 1;
    if (SCARRY1(cVar6,(char)puVar13)) {
      uVar20 = (*pcVar3)();
      param_1 = extraout_ECX;
      piVar15 = piVar14;
    }
    param_2 = (int)((ulonglong)uVar20 >> 0x20);
    piVar7 = (int *)uVar20;
    *(int **)((int)piVar15 + -4) = piVar7;
    *(ushort **)((int)piVar15 + -8) = param_1;
    *(int *)((int)piVar15 + -0xc) = param_2;
    *(uint **)((int)piVar15 + -0x10) = unaff_EBX;
    *(int **)((int)piVar15 + -0x14) = piVar15;
    *(int **)((int)piVar15 + -0x18) = piVar17;
    *(uint *)((int)piVar15 + -0x1c) = uVar18;
    *(int *)((int)piVar15 + -0x20) = iVar4;
    *piVar7 = (int)(FUN_0063c5ba + *piVar7);
    pcVar8 = (char *)((int)piVar7 + 1);
    *(int *)((int)(piVar7 + 0xb) + (int)pcVar8) =
         *(int *)((int)(piVar7 + 0xb) + (int)pcVar8) + 0x2a004bc9;
    unaff_EBP = *piVar17;
    unaff_EBX = (uint *)((int)unaff_EBX + -1);
    bVar5 = (byte)pcVar8;
    *pcVar8 = *pcVar8 + bVar5;
    *pcVar8 = *pcVar8 + bVar5;
    *(char *)unaff_EBX = *(char *)unaff_EBX + (char)((ulonglong)uVar20 >> 0x28);
    unaff_ESI = uVar18 ^ *unaff_EBX ^ *unaff_EBX ^ (uint)unaff_EBX;
    in_AF = 9 < (bVar5 & 0xf) | bVar19;
    uVar9 = CONCAT31((int3)((uint)pcVar8 >> 8),bVar5 + in_AF * -6) & 0xffffff0f;
    in_EAX = CONCAT22((short)(uVar9 >> 0x10),CONCAT11((char)((uint)pcVar8 >> 8) - in_AF,(char)uVar9)
                     );
  }
  cVar6 = (char)((uint)param_2 >> 8);
  *(char *)((int)unaff_EBX + -0x67) = *(char *)((int)unaff_EBX + -0x67) + cVar6;
  *(char *)(uVar18 - 0x67) = *(char *)(uVar18 - 0x67) + cVar6;
  cVar6 = (char)((uint)unaff_EBX >> 8);
  *(char *)(param_2 + -0x67) = *(char *)(param_2 + -0x67) + cVar6;
  *(char *)((int)piVar17 + -0x67) = *(char *)((int)piVar17 + -0x67) + cVar6;
  *(ushort **)((int)piVar16 + 5) = puVar13;
  *(uint *)((int)piVar16 + 1) =
       CONCAT22((short)((uint)param_1 >> 0x10),
                CONCAT11((char)((uint)param_1 >> 8) * '\x02',(char)param_1));
  *(int *)((int)piVar16 + -3) = param_2;
  *(uint **)((int)piVar16 + -7) = unaff_EBX;
  *(int *)((int)piVar16 + -0xb) = (int)piVar16 + 9;
  *(int **)((int)piVar16 + -0xf) = piVar17;
  *(uint *)((int)piVar16 + -0x13) = uVar18;
  *(int *)((int)piVar16 + -0x17) = iVar4;
  *(code **)puVar13 = FUN_0081616f + *(int *)puVar13;
  return;
}


