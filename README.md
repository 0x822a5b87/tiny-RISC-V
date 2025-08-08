# tiny-RISC-V
Recording the learning process of RISC-V

## REFERENCE

- [box-256](http://box-256.com/)
- [一个学习汇编的小游戏：BOX-256](https://0x822a5b87.github.io/2025/03/18/%E4%B8%80%E4%B8%AA%E5%AD%A6%E4%B9%A0%E6%B1%87%E7%BC%96%E7%9A%84%E5%B0%8F%E6%B8%B8%E6%88%8F%EF%BC%9ABOX-256/)

## REPRESENTATION

### BASE REPRESENTATION

$\underline{s}et~\underline{l}ess~\underline{t}han\Biggl\{\underline{\overline{i}}mmediate\Biggl\}\Biggl\{\underline{\overline{u}}nsigned\Biggl\}$, this represents four different instructions: `slt`, `slti`, `sltu`, `sltiu`.

### TYPE

```mermaid
---
title: code
---
flowchart LR

base_type("base type"):::green

rtype("R-Type"):::purple
itype("I-Type"):::purple
stype("S-Type"):::purple
btype("B-Type"):::purple
utype("U-Type"):::purple
jtype("J-Type"):::purple

rtype --> r("register-register operations")
itype --> i("short immediates and loads")
stype --> s("sotres")
btype --> b("conditional branches")
utype --> u("long immediates")
jtype --> j("unconditional jumps")


base_type --> rtype
base_type --> itype
base_type --> stype
base_type --> btype
base_type --> utype
base_type --> jtype

classDef pink 1,fill:#FFCCCC,stroke:#333, color: #fff, font-weight:bold;
classDef green fill: #696,color: #fff,font-weight: bold;
classDef purple fill:#969,stroke:#333, font-weight: bold;
classDef error fill:#bbf,stroke:#f66,stroke-width:2px,color:#fff,stroke-dasharray: 5 5
classDef coral fill:#f9f,stroke:#333,stroke-width:4px;
classDef animate stroke-dasharray: 9,5,stroke-dashoffset: 900,animation: dash 25s linear infinite;
```

### RISC-V instruction formats

```mermaid
---
title: "R-type"
config:
    packet: #with default value
        rowHeight: 32
        bitWidth: 32
        bitsPerRow: 32
        showBits: true
        paddingX: 5
---
packet-beta

0-6: "opcode"
7-11: "rd"
12-14: "funct3"
15-19: "rs1"
20-24: "rs2"
25-31: "funct7"
```

