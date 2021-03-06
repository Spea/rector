<?php

namespace Rector\SOLID\Tests\Rector\ClassMethod\ChangeReadOnlyVariableWithDefaultValueToConstantRector\Fixture;

class Scalar
{
    public function run()
    {
        $replacements = 'PHPUnit\Framework\TestCase\Notice';

        if ($replacements === 'asdf') {
        }
    }
}

?>
-----
<?php

namespace Rector\SOLID\Tests\Rector\ClassMethod\ChangeReadOnlyVariableWithDefaultValueToConstantRector\Fixture;

class Scalar
{
    /**
     * @var string
     */
    private const REPLACEMENTS = 'PHPUnit\Framework\TestCase\Notice';
    public function run()
    {
        if (self::REPLACEMENTS === 'asdf') {
        }
    }
}

?>
